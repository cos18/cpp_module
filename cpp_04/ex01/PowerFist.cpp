#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(const PowerFist &src): AWeapon(src) {
	return;
}

PowerFist::~PowerFist(void) {
	return;
}

PowerFist &PowerFist::operator=(const PowerFist &rhs) {
	this->copyMember(rhs);
	return *this;
}

void PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *\n";
}
