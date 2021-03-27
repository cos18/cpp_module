#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("shrubbery creation", 145, 137) {
	this->_target = "target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("shrubbery creation", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form(src) {
	this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const {
	Form::execute(b);
	
	std::ifstream temp("shrubbery");
	std::ofstream result(this->_target + "_shrubbery");
	std::string line;

	if (!temp.is_open()){
		if (result.is_open())
			result.close();
		throw std::runtime_error("Cannot read filename \"shrubbery\"");
	}
	if (!result.is_open()) {
		temp.close();
		throw std::runtime_error("Cannot write filename \"" + this->_target + "_shrubbery\"");
	}
	while (std::getline(temp, line))
		result << line << std::endl;
	temp.close();
	result.close();
}
