#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap {

public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &src);
	virtual ~NinjaTrap(void);
	NinjaTrap &operator=(const NinjaTrap &rhs);

	void ninjaShoebox(ClapTrap &ct);
	void ninjaShoebox(FragTrap &ft);
	void ninjaShoebox(ScavTrap &st);
	void ninjaShoebox(NinjaTrap &nt);

};

#endif
