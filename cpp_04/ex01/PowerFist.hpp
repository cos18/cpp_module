#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon {

public:
	PowerFist(void);
	PowerFist(const PowerFist &src);
	virtual ~PowerFist(void);
	PowerFist &operator=(const PowerFist &rhs);

	void attack(void) const;

};

#endif