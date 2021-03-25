#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {

public:
	Ice(void);
	Ice(const Ice &src);
	~Ice(void);
	Ice &operator=(const Ice &rhs);

	Ice* clone(void) const;
	void use(ICharacter &target);

};

#endif