#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm: public Form {

private:
	std::string _target;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	~RobotomyRequestForm(void);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

	void execute(const Bureaucrat &b) const;
};

#endif