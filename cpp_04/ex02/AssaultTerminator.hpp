#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

public:
	AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator &src);
	virtual ~AssaultTerminator(void);
	AssaultTerminator &operator=(const AssaultTerminator &rhs);

	AssaultTerminator *clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;

};

#endif