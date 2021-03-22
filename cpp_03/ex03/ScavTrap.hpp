#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	virtual ~ScavTrap(void);
	ScavTrap &operator=(const ScavTrap &rhs);

	void challengeNewcomer(void);

};

#endif
