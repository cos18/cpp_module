#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {
	return;
}

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << "\n";
}
