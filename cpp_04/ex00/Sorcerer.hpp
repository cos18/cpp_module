#ifndef SOCERER_HPP
# define SOCERER_HPP

# include "Victim.hpp"
# include <string>
# include <iostream>

class Sorcerer {

private:
	std::string _name;
	std::string _title;

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &src);
	~Sorcerer(void);
	Sorcerer &operator=(const Sorcerer &rhs);

	std::string getName(void) const;
	std::string getTitle(void) const;

	void polymorph(const Victim &v) const;

};

std::ostream &operator<<(std::ostream &o, const Sorcerer &rhs);

#endif