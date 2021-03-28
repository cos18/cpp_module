#include "Base.hpp"

Base *generate(void) {
	int random_num = rand() % 3;
	std::cout << "Generate ";
	switch (random_num)
	{
		case 0:
			std::cout << "A()\n";
			break;
		case 1:
			std::cout << "B()\n";
			break;
		default:
			std::cout << "C()\n";
	}
	switch (random_num)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void identify_from_pointer(Base *p) {
	std::cout << "identify_from_pointer: ";
	if (dynamic_cast<A *>(p)) {
		std::cout << "A\n";
		return;
	} else if (dynamic_cast<B *>(p)) {
		std::cout << "B\n";
		return;
	} else if (dynamic_cast<C *>(p)) {
		std::cout << "C\n";
		return;
	}
	std::cout << "Unknown error!\n";
}

void identify_from_reference(Base &p) {
	std::cout << "identify_from_reference: ";
	try {
		A &test = dynamic_cast<A &>(p);
		(void)test;
		std::cout << "A\n";
		return;
	} catch (std::exception &e) { }
	try {
		B &test = dynamic_cast<B &>(p);
		(void)test;
		std::cout << "B\n";
		return;
	} catch (std::exception &e) { }
	try {
		C &test = dynamic_cast<C &>(p);
		(void)test;
		std::cout << "C\n";
		return;
	} catch (std::exception &e) { }
	std::cout << "Unknown error!\n";
}

int main(void) {
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		std::cout << "TEST " << i << std::endl;
		Base *test = generate();
		identify_from_pointer(test);
		identify_from_reference(*test);
		delete test;
		std::cout << std::endl;
	}
	return 0;
}