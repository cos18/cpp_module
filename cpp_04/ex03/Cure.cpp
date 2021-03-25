#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
	return;
}

Cure::Cure(const Cure &src): AMateria(src) {
	return;
}

Cure::~Cure(void) {
	return;
}

Cure &Cure::operator=(const Cure &rhs) {
	this->copyMember(rhs);
	return *this;
}

Cure* Cure::clone(void) const {
	Cure *result = new Cure(*this);
	return result;
}

void Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "*  heals " << target.getName() << "'s wounds *\n";
}
