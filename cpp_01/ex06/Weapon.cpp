#include "Weapon.hpp"

Weapon::Weapon(void): _type("") {
	return;
}

Weapon::Weapon(std::string type): _type(type) {
	return;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}

const std::string &Weapon::getType(void) {
	return this->_type;
}
