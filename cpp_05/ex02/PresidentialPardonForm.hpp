#ifndef PRESIDENTIAL_PARDON_FORM
# define PRESIDENTIAL_PARDON_FORM

# include "Form.hpp"

class PresidentialPardonForm: public Form {

private:
	std::string _target;

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	~PresidentialPardonForm(void);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	void execute(const Bureaucrat &b) const;
};

#endif