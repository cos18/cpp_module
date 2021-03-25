#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
	return;
}

Ice::Ice(const Ice &src): AMateria(src) {
	return;
}

Ice::~Ice(void) {
	return;
}

Ice &Ice::operator=(const Ice &rhs) {
	this->copyMember(rhs);
	return *this;
}

Ice* Ice::clone(void) const {
	Ice *result = new Ice(*this);
	return result;
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
