#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _hp(100), _maxHP(100), _ep(50), _maxEP(50),
									_level(1), _name(name), _meleeDamage(20), _rangedDamage(15), _armorReduction(3)
{
	std::cout << "SC4V-TP " << this->_name << ": Yoo hoooooooooo!\n";
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
	std::cout << "SC4V-TP " << this->_name << ": Yoo hoooooooooo! with " << src._name << "!\n";
}

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4V-TP " << this->_name << ": I can see... the code\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
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

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedDamage << " points of damage!\n";
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
	if ((int)amount <= this->_armorReduction) {
		std::cout << "SC4V-TP " << this->_name << " get damaged, but armor defence all of damages!\n";
		return;
	}
	amount -= this->_armorReduction;
	std::cout << "SC4V-TP " << this->_name << " takes " << amount << " points of damage!\n";
	this->_hp = (this->_hp > (int)amount) ? (this->_hp - amount) : 0;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SC4V-TP " << this->_name << " repaired " << amount << " points of health!\n";
	this->_hp = (this->_hp + (int)amount < this->_maxHP) ? (this->_hp + amount) : this->_maxHP;
}

void ScavTrap::setName(std::string name) {
	this->_name = name;
}

std::string ScavTrap::getName(void) const {
	return this->_name;
}

int ScavTrap::getHP(void) const{
	return this->_hp;
}

int ScavTrap::getMaxHP(void) const{
	return this->_maxHP;
}

int ScavTrap::getEP(void) const{
	return this->_ep;
}

int ScavTrap::getMaxEP(void) const{
	return this->_maxEP;
}

int ScavTrap::getLevel(void) const{
	return this->_level;
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

std::ostream &operator<<(std::ostream &o, const ScavTrap &rhs) {
	o << "====================[ SC4V-TP ]====================\n";
	o << " Name : " << rhs.getName() << "\n";
	o << " Level : " << rhs.getLevel() << "\n";
	o << " HP : " << rhs.getHP() << " / " << rhs.getMaxHP() << "\n";
	o << " EP : " << rhs.getEP() << " / " << rhs.getMaxEP() << "\n";
	o << "===================================================\n";
	return o;
}
