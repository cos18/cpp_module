#include "Intern.hpp"

int main(void) {
	Bureaucrat doby("doby", 1);
	Intern sunpark;

	Form *sc = sunpark.makeForm("shrubbery creation", "42");
	std::cout << *sc << "\n";
	doby.signForm(*sc);
	doby.executeForm(*sc);
	
	std::cout << "\n\n";

	Form *rr = sunpark.makeForm("robotomy request", "sunpark");
	std::cout << *rr << "\n";
	doby.signForm(*rr);
	doby.executeForm(*rr);

	std::cout << "\n\n";

	Form *pp = sunpark.makeForm("presidential pardon", "sunpark");
	std::cout << *pp << "\n";
	doby.signForm(*pp);
	doby.executeForm(*pp);

	std::cout << "\n\n";

	try {
		Form *wrong = sunpark.makeForm("wrong", "wrong");
		std::cout << *wrong << "\n";
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
}