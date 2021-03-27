#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form {

private:
	const std::string _name;
	bool _signed;
	const int _signGrade;
	const int _executeGrade;

public:
	Form(void);
	Form(const std::string name, const int signGrade, const int executeGrade);
	Form(const Form &src);
	virtual ~Form(void);
	Form &operator=(const Form &rhs);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};
	class AlreadySignedException: public std::exception {
		virtual const char *what() const throw();
	};
	class UnsignedException: public std::exception {
		virtual const char *what() const throw();
	};
	const std::string getName(void) const;
	bool getSigned(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	void beSigned(const Bureaucrat &b);
	virtual void execute(const Bureaucrat &b) const;

};

std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif