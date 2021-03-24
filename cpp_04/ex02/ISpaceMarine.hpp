#ifndef I_SPACE_MARINE_HPP
# define I_SPACE_MARINE_HPP

# include <iostream>
# include <string>

class ISpaceMarine {

public:
	virtual ~ISpaceMarine(void) {}
	virtual ISpaceMarine *clone(void) const = 0;
	virtual void battleCry(void) const = 0;
	virtual void rangedAttack(void) const = 0;
	virtual void meleeAttack(void) const = 0;

};

#endif