#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {

public:
	const std::string _name;
	bool _signed;
	const int _grade;

private:
	Form(void);
	Form(const std::string name, const int grade);
	~Form(void);
	Form &operator=(const Form &rhs);

};

#endif