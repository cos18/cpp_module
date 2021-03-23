#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	this->_ep = 50;
	this->_maxEP = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armorReduction = 3;
	this->_type = "SC4V-TP";
	std::cout << "Unnamed SC4V-TP: Yoo hoooooooooo!\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_ep = 50;
	this->_maxEP = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armorReduction = 3;
	this->_type = "SC4V-TP";
	std::cout << "SC4V-TP " << this->_name << ": Yoo hoooooooooo!\n";
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src) {
	std::cout << "SC4V-TP " << this->_name << ": Yoo hoooooooooo! with " << src._name << "!\n";
}

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4V-TP " << this->_name << ": I can see... the code\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	this->copyMember(rhs);
	return *this;
}

void ScavTrap::challengeNewcomer(void) {
	std::string challenge_word[5] = {
		"Good as new, I think. Am I leaking?",
		"Turning off the optics... they can't see me...",
		"The traveler will protect me. The traveler will protect me.",
		"I'm detecting a motor unit malfunction... I can't move! I'm paralyzed with fear!",
		"My servos... are seizing..."
	};
	std::cout << "SC4V-TP " << this->_name << ": " << challenge_word[rand() % 5] << "\n";
}
