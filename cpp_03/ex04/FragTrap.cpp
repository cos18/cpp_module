#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->_type = "FR4G-TP";
	std::cout << "Unnamed FR4G-TP: Let's get this party started!\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_type = "FR4G-TP";
	std::cout << "FR4G-TP " << this->_name << ": Let's get this party started\n";
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src) {
	this->_type = "FR4G-TP";
	std::cout << "FR4G-TP " << this->_name << ": Let's get this party started with " << src._name << "!\n";
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << this->_name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	this->copyMember(rhs);
	return *this;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	if (this->_ep == 0) {
		std::cout << "FR4G-TP " << this->_name << ": Hnngh! Empty!\n";
		return;
	}
	this->_ep = (this->_ep <= 25) ? 0 : (this->_ep - 25);
	std::string attack_word[5] = {
		"I am a tornado of death and bullets!",
		"Stop me before I kill again, except don't!",
		"Ha ha ha! Fall before your robot overlord!",
		"Can't touch this!",
		"Ha! Keep 'em coming!"
	};
	std::cout << this->_type << " " << this->_name << ": " << attack_word[rand() % 5] << "\n";
	std::cout << this->_type << " " << this->_name << " attacks " << target << ", causing " << rand() % 30 << " points of damage!\n";
}
