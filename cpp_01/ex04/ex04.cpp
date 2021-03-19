#include <iostream>
#include <string>

int main(void) {
	std::string str_normal("HI THIS IS BRAIN");
	std::string *str_pointer = &str_normal;
	std::string &str_referece = str_normal;

	std::cout << "str_normal : " << str_normal << "\n";
	std::cout << "str_pointer : " << *str_pointer << "\n";
	std::cout << "str_reference : " << str_referece << "\n";
}
