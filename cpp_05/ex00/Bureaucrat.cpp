#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Bureaucrat"), _grade(150) {
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
	this->_grade = src._grade;
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "GradeTooHighException: Grade cannot be over 1!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "GradeTooLowException: Grade cannot be under 150!";
}

const std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void Bureaucrat::increaseGrade(void) {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decreaseGrade(void) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "\n";
	return o;
}
