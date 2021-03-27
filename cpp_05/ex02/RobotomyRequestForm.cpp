#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("robotomy request", 72, 45) {
	this->_target = "target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("robotomy request", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form(src) {
	this->_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &b) const {
	Form::execute(b);
	std::cout << "** some drilling noises **\n";
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully!\n";
	else
		std::cout << "Failed to robotomized" << this->_target << "!\n";
}
