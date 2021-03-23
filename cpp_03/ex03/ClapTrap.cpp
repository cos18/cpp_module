#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hp(100), _maxHP(100), _ep(100), _maxEP(100), _level(1),
						_name(""), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "Unnamed ClapTrap Created!\n";
}

ClapTrap::ClapTrap(std::string name): _hp(100), _maxHP(100), _ep(100), _maxEP(100),
									_level(1), _name(name), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "ClapTrap " << this->_name << " Created!\n";
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
	std::cout << "ClapTrap " << this->_name << " Created!\n";
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->_name << " Destroyed!\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	this->copyMember(rhs);
	return *this;
}

void ClapTrap::copyMember(const ClapTrap &rhs) {
	this->_hp = rhs._hp;
	this->_maxHP = rhs._maxHP;
	this->_ep = rhs._ep;
	this->_maxEP = rhs._maxEP;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeDamage = rhs._meleeDamage;
	this->_rangedDamage = rhs._rangedDamage;
	this->_armorReduction = rhs._armorReduction;
	this->_type = rhs._type;
}

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << this->_type << " " << this->_name << " attacks " << target << " at range, causing " << this->_rangedDamage << " points of damage!\n";
}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << this->_type << " " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount <= this->_armorReduction) {
		std::cout << this->_type << " " << this->_name << " get damaged, but armor defence all of damages!\n";
		return;
	}
	amount -= this->_armorReduction;
	std::cout << this->_type << " " << this->_name << " takes " << amount << " points of damage!\n";
	this->_hp = (this->_hp > (int)amount) ? (this->_hp - amount) : 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->_type << " " << this->_name << " repaired " << amount << " points of health!\n";
	this->_hp = (this->_hp + (int)amount < this->_maxHP) ? (this->_hp + amount) : this->_maxHP;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string ClapTrap::getName(void) const {
	return this->_name;
}

int ClapTrap::getHP(void) const{
	return this->_hp;
}

int ClapTrap::getMaxHP(void) const{
	return this->_maxHP;
}

int ClapTrap::getEP(void) const{
	return this->_ep;
}

int ClapTrap::getMaxEP(void) const{
	return this->_maxEP;
}

int ClapTrap::getLevel(void) const{
	return this->_level;
}

std::string ClapTrap::getType(void) const {
	return this->_type;
}

std::ostream &operator<<(std::ostream &o, const ClapTrap &rhs) {
	o << "====================[ " << rhs.getType() << " ]====================\n";
	o << " Name : " << rhs.getName() << "\n";
	o << " Level : " << rhs.getLevel() << "\n";
	o << " HP : " << rhs.getHP() << " / " << rhs.getMaxHP() << "\n";
	o << " EP : " << rhs.getEP() << " / " << rhs.getMaxEP() << "\n";
	o << "===================================================\n";
	return o;
}
