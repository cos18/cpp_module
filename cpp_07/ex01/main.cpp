#include "iter.hpp"

template<typename T>
void iter(T *arr, unsigned int len, void (*f)(T const &t)) {
	for (unsigned int i = 0; i < len; i++)
		(*f)(arr[i]);
}

template<typename T>
void printElement(T const &t) {
	std::cout << t << std::endl;
}

int main(void) {
	int testInt[10] = {4, 3, 2, 6, 3, 1, 2, 2, 2, 7};
	std::cout << "TEST INT\n";
	iter(testInt, 10, printElement);
	std::cout << std::endl;

	char testChar[5] = "test";
	std::cout << "TEST CHAR\n";
	iter(testChar, 5, printElement);
	std::cout << std::endl;
}
