#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	virtual ~FragTrap(void);
	FragTrap &operator=(const FragTrap &rhs);

	void vaulthunter_dot_exe(std::string const & target);

};

#endif
