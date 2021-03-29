#include "Array.hpp"

int main(void) {
	Array<int> test;
	Array<int> testInt(10);

	std::cout << "sizeof testInt: " << testInt.size() << std::endl;
	std::cout << "testInt[i] = i" << std::endl;
	for (int i = 0; i < 10; i++) {
		testInt[i] = i;
		std::cout << testInt[i] << std::endl;
	}

	std::cout << "test[0] = 0" << std::endl;
	try {
		test[0] = 0;
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}

	test = testInt;
	std::cout << "test[i]" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << test[i] << std::endl;
	}

	std::cout << "test[10] = 10;" << std::endl;
	try {
		test[10] = 10;
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
}