#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieEvent {

private:
	std::string _type;

public:
	ZombieEvent(void);
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump(void);

};

#endif
