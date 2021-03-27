#ifndef INTERN_H
# define INTERN_H

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern(void);
	Intern(const Intern &src);
	~Intern(void);
	Intern &operator=(const Intern &rhs);

	class UnknownFormNameException: public std::exception {
		virtual const char *what() const throw();
	};
	Form *makeForm(std::string name, std::string target);

};

#endif