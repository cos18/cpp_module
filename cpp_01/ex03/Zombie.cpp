#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Ahhhhhhh....(died)\n";
}

void Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braaaaaiiiiinnnnn.....\n";
}
