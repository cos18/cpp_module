#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim {

public:
	Peon(std::string name);
	Peon(const Peon &src);
	virtual ~Peon(void);
	Peon &operator=(const Peon &rhs);

	virtual void getPolymorphed(void) const;

};

#endif