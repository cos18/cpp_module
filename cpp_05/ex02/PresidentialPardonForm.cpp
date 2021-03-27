#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("presidential pardon", 25, 5) {
	this->_target = "target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("presidential pardon", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form(src) {
	this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const {
	Form::execute(b);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.\n";
}
