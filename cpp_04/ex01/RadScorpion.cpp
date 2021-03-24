#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion &src): Enemy(src) {
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *\n";
}

RadScorpion &RadScorpion::operator=(const RadScorpion &rhs) {
	this->copyMember(rhs);
	return *this;
}

void RadScorpion::takeDamage(int damage) {
	Enemy::takeDamage(damage);
}