#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	this->_hp = 100;
	this->_maxHP = 100;
	this->_ep = 120;
	this->_maxEP = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
	this->_type = "SUPER-TP";
	std::cout << "Unnamed SUPER-TP: Fiyaaaa!\n";
}

SuperTrap::SuperTrap(std::string name) {
	this->_name = name;
	this->_hp = 100;
	this->_maxHP = 100;
	this->_ep = 120;
	this->_maxEP = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
	this->_type = "SUPER-TP";
	std::cout << "SUPER-TP " << this->_name << ": Fiyaaaa!\n";
}

SuperTrap::SuperTrap(const SuperTrap &src) {
	this->copyMember(src);
	std::cout << "SUPER-TP " << this->_name << ": Fiyaaaa! with " << src._name << "!\n";
}

SuperTrap::~SuperTrap(void) {
	std::cout << "SUPER-TP " << this->_name << ": Fuuuuhhhhhhh!!\n";
}

SuperTrap &SuperTrap::operator=(const SuperTrap &rhs) {
	this->copyMember(rhs);
	return *this;
}

void SuperTrap::rangedAttack(const std::string &target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) {
	NinjaTrap::meleeAttack(target);
}
