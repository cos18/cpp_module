#include "Form.hpp"

Form::Form(void): _name("form"), _signed(false), _signGrade(150), _executeGrade(150) {
	return;
}

Form::Form(const std::string name, const int signGrade, const int executeGrade)
			: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src): _name(src._name), _signed(src._signed),
							_signGrade(src._signGrade), _executeGrade(src._executeGrade) {
	return;
}

Form::~Form(void) {
	return;
}

Form &Form::operator=(const Form &rhs) {
	this->_signed = rhs._signed;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "GradeTooHighException: Grade cannot be over 1!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "GradeTooLowException: Grade cannot be under 150!";
}

const char *Form::AlreadySignedException::what() const throw() {
	return "AlreadySignedException: Form is already signed!";
}

const char *Form::UnsignedException::what() const throw() {
	return "UnsignedException: Form is not ready to execute!";
}

const std::string Form::getName(void) const {
	return this->_name;
}

bool Form::getSigned(void) const {
	return this->_signed;
}

int Form::getSignGrade(void) const {
	return this->_signGrade;
}

int Form::getExecuteGrade(void) const {
	return this->_executeGrade;
}

void Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	if (this->_signed)
		throw Form::AlreadySignedException();
	this->_signed = true;
}

void Form::execute(const Bureaucrat &b) const{
	if (b.getGrade() > this->_executeGrade)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		throw Form::UnsignedException();
}

std::ostream &operator<<(std::ostream &o, const Form &rhs) {
	o << rhs.getName() << "<" << (rhs.getSigned() ? "O" : "X") << ">, form SignGrade "
	<< rhs.getSignGrade() << " / ExecuteGrade " << rhs.getExecuteGrade();
	return o;
}
