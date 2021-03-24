#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {

public:
	PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle &src);
	virtual ~PlasmaRifle(void);
	PlasmaRifle &operator=(const PlasmaRifle &rhs);

	void attack(void) const;

};

#endif