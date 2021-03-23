#include "FragTrap.hpp"

FragTrap::FragTrap(void): _hp(100), _maxHP(100), _ep(100), _maxEP(100), _level(1),
						_name(""), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "Unnamed FR4G-TP: Let's get this party started!\n";
}

FragTrap::FragTrap(std::string name): _hp(100), _maxHP(100), _ep(100), _maxEP(100),
									_level(1), _name(name), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "FR4G-TP " << this->_name << ": Let's get this party started!\n";
}

FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
	std::cout << "FR4G-TP " << this->_name << ": Let's get this party started with " << src._name << "!\n";
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << this->_name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	this->_hp = rhs._hp;
	this->_maxHP = rhs._maxHP;
	this->_ep = rhs._ep;
	this->_maxEP = rhs._maxEP;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeDamage = rhs._meleeDamage;
	this->_rangedDamage = rhs._rangedDamage;
	this->_armorReduction = rhs._armorReduction;
	return *this;
}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedDamage << " points of damage!\n";
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount) {
	if ((int)amount <= this->_armorReduction) {
		std::cout << "FR4G-TP " << this->_name << " get damaged, but armor defence all of damages!\n";
		return;
	}
	amount -= this->_armorReduction;
	std::cout << "FR4G-TP " << this->_name << " takes " << amount << " points of damage!\n";
	this->_hp = (this->_hp > (int)amount) ? (this->_hp - amount) : 0;
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP " << this->_name << " repaired " << amount << " points of health!\n";
	this->_hp = (this->_hp + (int)amount < this->_maxHP) ? (this->_hp + amount) : this->_maxHP;
}

void FragTrap::setName(std::string name) {
	this->_name = name;
}

std::string FragTrap::getName(void) const {
	return this->_name;
}

int FragTrap::getHP(void) const{
	return this->_hp;
}

int FragTrap::getMaxHP(void) const{
	return this->_maxHP;
}

int FragTrap::getEP(void) const{
	return this->_ep;
}

int FragTrap::getMaxEP(void) const{
	return this->_maxEP;
}

int FragTrap::getLevel(void) const{
	return this->_level;
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
	std::cout << "FR4G-TP " << this->_name << ": " << attack_word[rand() % 5] << "\n";
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << ", causing " << rand() % 30 << " points of damage!\n";
}

std::ostream &operator<<(std::ostream &o, const FragTrap &rhs) {
	o << "====================[ FR4G-TP ]====================\n";
	o << " Name : " << rhs.getName() << "\n";
	o << " Level : " << rhs.getLevel() << "\n";
	o << " HP : " << rhs.getHP() << " / " << rhs.getMaxHP() << "\n";
	o << " EP : " << rhs.getEP() << " / " << rhs.getMaxEP() << "\n";
	o << "===================================================\n";
	return o;
}
