#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap {

public:
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &src);
	~SuperTrap(void);
	SuperTrap &operator=(const SuperTrap &rhs);

	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);

};

#endif
