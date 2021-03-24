#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &src) {
	(void)src;
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh...\n";
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &rhs) {
	(void)rhs;
	return *this;
}

TacticalMarine *TacticalMarine::clone(void) const {
	TacticalMarine *result = new TacticalMarine(*this);
	return result;
}

void TacticalMarine::battleCry(void) const {
	std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack(void) const{
	std::cout << "* attacks with a chainsword *\n";
}