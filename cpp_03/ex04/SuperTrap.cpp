#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	this->_hp = this->FragTrap::_hp;
	this->_maxHP = this->FragTrap::_maxHP;
	this->_ep = this->NinjaTrap::_ep;
	this->_maxEP = this->NinjaTrap::_maxEP;
	this->_meleeDamage = this->NinjaTrap::_meleeDamage;
	this->_rangedDamage = this->FragTrap::_rangedDamage;
	this->_armorReduction = this->FragTrap::_armorReduction;
	this->_type = "SUPER-TP";
	std::cout << "Unnamed SUPER-TP: Fiyaaaa!\n";
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), NinjaTrap(name), FragTrap(name) {
	this->_hp = this->FragTrap::_hp;
	this->_maxHP = this->FragTrap::_maxHP;
	this->_ep = this->NinjaTrap::_ep;
	this->_maxEP = this->NinjaTrap::_maxEP;
	this->_meleeDamage = this->NinjaTrap::_meleeDamage;
	this->_rangedDamage = this->FragTrap::_rangedDamage;
	this->_armorReduction = this->FragTrap::_armorReduction;
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
