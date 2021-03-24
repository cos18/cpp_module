#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(const SuperMutant &src): Enemy(src) {
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh...\n";
}

SuperMutant &SuperMutant::operator=(const SuperMutant &rhs) {
	this->copyMember(rhs);
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage((damage > 3) ? damage - 3 : 0);
}