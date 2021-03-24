#include "Enemy.hpp"

Enemy::Enemy(void): _hp(0), _type("") {
	return;
}

Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type) {
	return;
}

Enemy::~Enemy(void) {
	return;
}

Enemy &Enemy::operator=(const Enemy &rhs) {
	this->copyMember(rhs);
	return *this;
}

void Enemy::copyMember(const Enemy &rhs) {
	this->_hp = rhs._hp;
	this->_type = rhs._type;
}

const std::string Enemy::getType(void) const {
	return this->_type;
}

int Enemy::getHP(void) const {
	return this->_hp;
}

void Enemy::takeDamage(int damage) {
	if (damage < 0) {
		std::cout << "[ERR] damage can't be under zero!\n";
	}
	if (this->_hp == 0) {
		std::cout << this->_type << " already died... DON'T DO THAT...\n";
		return;
	}
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << this->_type << " gets " << damage << " damage, remaining " << this->_hp << " hp points!\n";
}
