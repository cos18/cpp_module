#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {
	return;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) {
	if (this->_weapon != NULL)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << "\n";
	else
		std::cout <<"[ERR] " << this->_name << "doesn't have weapon!\n";
}
