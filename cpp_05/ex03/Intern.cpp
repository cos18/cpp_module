#include "Intern.hpp"

Intern::Intern(void) {
	return;
}

Intern::Intern(const Intern &src) {
	(void)src;
	return;
}

Intern::~Intern(void) {
	return;
}

Intern &Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return *this;
}
Form *createSC(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *createRR(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *createPP(std::string target) {
	return new PresidentialPardonForm(target);
}

const char *Intern::UnknownFormNameException::what() const throw() {
	return "UnknownFormNameException: Unknown name!";
}

typedef Form *(*ft_form)(std::string);

Form *Intern::makeForm(std::string name, std::string target) {
	std::string form_name[3] = {
		"shrubbery creation", 
		"robotomy request",
		"presidential pardon"
	};
	ft_form form_create[3] = {createSC, createRR, createPP};
	for (int i = 0; i < 3; i++) {
		if (form_name[i] == name) {
			std::cout << "Intern creates " << name << ".\n";
			return form_create[i](target);
		}
	}
	throw Intern::UnknownFormNameException();
}