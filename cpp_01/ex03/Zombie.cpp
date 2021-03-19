#include "Zombie.hpp"

Zombie::Zombie(void): _name(""), _type("") {
	return;
}

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Ahhhhhhh....(died)\n";
}

void Zombie::setZombieInfo(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
}

void Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braaaaaiiiiinnnnn.....\n";
}
