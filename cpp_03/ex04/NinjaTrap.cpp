#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->_hp = 60;
	this->_maxHP = 60;
	this->_ep = 120;
	this->_maxEP = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armorReduction = 0;
	this->_type = "NINJ4-TP";
	std::cout << "NINJ4-TP " << this->_name << ": Hiyaaaa!\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &src): ClapTrap(src) {
	std::cout << "NINJ4-TP " << this->_name << ": Hiyaaaa! with " << src._name << "!\n";
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NINJ4-TP " << this->_name << ": Uhhhhhhh!!\n";
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &rhs) {
	this->copyMember(rhs);
	return *this;
}

void NinjaTrap::ninjaShoebox(ClapTrap &ct) {
	std::cout << this->_type << " " << this->_name << " meet ClapTrap " << ct.getName() << "\n";
	std::cout << "Clap Clap CLAP!\n";
}

void NinjaTrap::ninjaShoebox(FragTrap &ft) {
	std::cout << this->_type << " " << this->_name << " meet FragTrap " << ft.getName() << "\n";
	std::cout << "Frag... Frog...\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap &st) {
	std::cout << this->_type << " " << this->_name << " meet ScavTrap " << st.getName() << "\n";
	std::cout << "What shoud I said?\n";
}

void NinjaTrap::ninjaShoebox(NinjaTrap &nt) {
	std::cout << this->_type << " " << this->_name << " meet NinjaTrap " << nt.getName() << "\n";
	std::cout << "You feel cold\n";
}
