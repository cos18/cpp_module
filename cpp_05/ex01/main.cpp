#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat sunpark("sunpark", 2);
	try {
		std::cout << sunpark;
		sunpark.increaseGrade();
		std::cout << sunpark;
		sunpark.increaseGrade();
		std::cout << sunpark;
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
	
	std::cout << "\n\n";

	Bureaucrat empty;
	try {
		std::cout << empty;
		empty.decreaseGrade();
		std::cout << empty;
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
}