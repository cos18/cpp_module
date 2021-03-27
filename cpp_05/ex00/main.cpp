#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat sunpark("sunpark", 2);
	try {
		std::cout << sunpark << "\n";
		sunpark.increaseGrade();
		std::cout << sunpark << "\n";
		sunpark.increaseGrade();
		std::cout << sunpark << "\n";
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
	std::cout << sunpark << "\n";
	
	std::cout << "\n\n";

	Bureaucrat empty;
	try {
		std::cout << empty << "\n";
		empty.decreaseGrade();
		std::cout << empty << "\n";
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
	std::cout << empty << "\n";

	std::cout << "\n\n";

	try {
		Bureaucrat noGrade("grade", 200);
		std::cout << noGrade << "\n";
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}

	std::cout << "\n\n";

	Bureaucrat *test;
	try {
		test = new Bureaucrat("test", 0);
		std::cout << *test << "\n";
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
}