#include <iostream>
#include <cstdlib>
#include <ctime>

typedef struct Data {
	std::string s1;
	int n;
	std::string s2;
} Data;

std::string *random_string(void)
{
	std::string eng("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	char tmp[8];

	for (int i = 0; i < 8; i++)
		tmp[i] = eng[rand() % eng.length()];
	return new std::string(tmp, 8);
}

void *serialize(void) {
	char *raw = new char[52];

	std::string *s1 = random_string();
	int n = rand();
	std::string *s2 = random_string();
	*(reinterpret_cast<std::string *>(raw)) = *s1;
	*(reinterpret_cast<int *>(raw + 24)) = n;
	*(reinterpret_cast<std::string *>(raw + 32)) = *s2;
	std::cout << "Serializing   s1: " << *s1 << " / n : " << n << " / s2 : " << *s2 << std::endl;
	delete s1;
	delete s2;
	return raw;
}

Data *deserialize(void *raw) {
	Data *result = new Data;

	result->s1 = std::string(*(reinterpret_cast<std::string *>(raw)));
	result->n = *(reinterpret_cast<int *>(raw) + 6);
	result->s2 = std::string(*(reinterpret_cast<std::string *>(static_cast<char *>(raw) + 32)));
	return result;
}

int main(void) {
	srand(time(NULL));
	void *test = serialize();
	Data *result = deserialize(test);
	delete static_cast<char *>(test);
	std::cout << "Deserializing s1: " << result->s1 << " / n : " << result->n << " / s2 : " << result->s2 << std::endl;
	delete result;
	return 0;
}