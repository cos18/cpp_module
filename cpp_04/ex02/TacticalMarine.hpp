#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {

public:
	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &src);
	virtual ~TacticalMarine(void);
	TacticalMarine &operator=(const TacticalMarine &rhs);

	TacticalMarine *clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;

};

#endif