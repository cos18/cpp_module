#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void): _type("") {
	return;
}

void ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, this->_type);
}

std::string random_string()
{
	std::string eng("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	std::string result("");

	for (int i = 0; i < 10; i++)
		result += eng[rand() % eng.length()];
	return result;
}

Zombie *ZombieEvent::randomChump(void) {
	Zombie *result = new Zombie(random_string(), this->_type);
	result->announce();
	return result;
}
