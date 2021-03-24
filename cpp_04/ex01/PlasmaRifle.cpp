#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src): AWeapon(src) {
	return;
}

PlasmaRifle::~PlasmaRifle(void) {
	return;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rhs) {
	this->copyMember(rhs);
	return *this;
}

void PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *\n";
}
