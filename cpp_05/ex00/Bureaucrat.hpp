#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {

private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	virtual ~Bureaucrat(void);
	Bureaucrat &operator=(const Bureaucrat &src);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};
	const std::string getName(void) const;
	int getGrade(void) const;
	void increaseGrade(void);
	void decreaseGrade(void);

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif