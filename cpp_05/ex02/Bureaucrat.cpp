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

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src._name), _grade(src._grade) {
	return;
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

void Bureaucrat::signForm(Form &f) {
	try {
		f.beSigned(*this);
		std::cout << *this << " signs " << f << "\n";
	} catch (Form::AlreadySignedException &e) {
		std::cout << *this << " cannot sign " << f
			<< " because the form is already signed.\n";
	} catch (Form::GradeTooLowException &e){
		std::cout << *this << " cannot sign " << f
				<< " because it's grade is too low.\n";
	}
}

void Bureaucrat::executeForm(Form &f) {
	try {
		f.execute(*this);
		std::cout << *this << " executes " << f << "\n";
	} catch (Form::UnsignedException &e) {
		std::cout << *this << " cannot execute " << f
			<< " because the form isn't signed.\n";
	} catch (Form::GradeTooLowException &e){
		std::cout << *this << " cannot execute " << f
				<< " because it's grade is too low.\n";
	} catch (std::exception &e) {
		std::cout << *this << " cannot execute " << f
				<< " because " << e.what() << "\n";
	}
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
