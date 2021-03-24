#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src) {
	(void)src;
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back...\n";
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &rhs) {
	(void)rhs;
	return *this;
}

AssaultTerminator *AssaultTerminator::clone(void) const {
	AssaultTerminator *result = new AssaultTerminator(*this);
	return result;
}

void AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack(void) const{
	std::cout << "* attacks with chainfists *\n";
}