#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {

protected:
	std::string _name;

	Victim(void);

public:
	Victim(std::string name);
	Victim(const Victim &src);
	virtual ~Victim(void);
	Victim &operator=(const Victim &rhs);

	std::string getName(void) const;
	void copyMember(const Victim &rhs);

	virtual void getPolymorphed(void) const;

};

std::ostream &operator<<(std::ostream &o, const Victim &rhs);

#endif