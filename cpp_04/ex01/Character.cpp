#include "Character.hpp"

Character::Character(void): _name(""), _ap(40), _weapon(NULL) {
	return;
}

Character::Character(const Character &src): _name(src._name), _ap(src._ap), _weapon(src._weapon) {
	return;
}

Character::Character(const std::string &name): _name(name), _ap(40), _weapon(NULL) {
	return;
}

Character::~Character(void) {
	return;
}

Character &Character::operator=(const Character &rhs) {
	this->copyMember(rhs);
	return *this;
}

void Character::copyMember(const Character &rhs) {
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_weapon = rhs._weapon;
}

void Character::recoverAP(void) {
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon *w) {
	this->_weapon = w;
}

void Character::attack(Enemy *e) {
	if (e == NULL) {
		std::cout << "Enemy dosen't exist!\n";
		return;
	}
	bool enemyAlreadyDead = (e->getHP() == 0);
	if (this->_weapon == NULL) {
		std::cout << this->_name << " doesn't have weapon!\n";
		return;
	}
	if (this->_ap < this->_weapon->getAPCost()) {
		std::cout << this->_name << " doesn't have enough ap to attack with " << this->_weapon->getName() << "!\n";
	}
	std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_weapon->getName() << "\n";
	this->_weapon->attack();
	e->takeDamage(this->_weapon->getDamage());
	this->_ap -= this->_weapon->getAPCost();
	if (!enemyAlreadyDead && e->getHP() <= 0)
		delete e;
}

const std::string Character::getName(void) const{
	return this->_name;
}

int Character::getAP(void) const {
	return this->_ap;
}

const AWeapon *Character::getWeapon(void) const {
	return this->_weapon;
}

std::ostream &operator<<(std::ostream &o, const Character &rhs) {
	o << rhs.getName() << " has " << rhs.getAP() << " AP and ";
	if (rhs.getWeapon())
		o << "wields a " << rhs.getWeapon()->getName();
	else
		o << "is unarmed";
	o << std::endl;
	return o;
}
