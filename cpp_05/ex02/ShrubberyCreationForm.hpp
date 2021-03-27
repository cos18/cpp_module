#ifndef SHRUBBERY_CREATION_FORM
# define SHRUBBERY_CREATION_FORM

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form {

private:
	std::string _target;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

	void execute(const Bureaucrat &b) const;
};

#endif