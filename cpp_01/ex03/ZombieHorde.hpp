#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ZombieHorde {

private:
	Zombie *_zbs;
	int _n;

public:
	ZombieHorde(int n);
	~ZombieHorde(void);
	void announce(void);

};

#endif
