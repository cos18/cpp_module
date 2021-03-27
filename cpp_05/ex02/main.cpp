#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	Bureaucrat sunpark("sunpark", 45);

	ShrubberyCreationForm sc("42");
	std::cout << sc << "\n";
	sunpark.signForm(sc);
	sunpark.executeForm(sc);
	
	std::cout << "\n\n";

	RobotomyRequestForm rr("sunpark");
	std::cout << rr << "\n";
	sunpark.signForm(rr);
	sunpark.executeForm(rr);

	std::cout << "\n\n";

	PresidentialPardonForm pp("sunpark");
	std::cout << pp << "\n";
	sunpark.signForm(pp);
	sunpark.executeForm(pp);

	Bureaucrat doby("doby", 1);
	doby.signForm(pp);
	doby.executeForm(pp);
}