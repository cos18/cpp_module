#include "AMateria.hpp"

AMateria::AMateria(void): _type(""), _xp(0) {
	return;
}

AMateria::AMateria(const std::string &type): _type(type), _xp(0) {
	return;
}

AMateria::AMateria(const AMateria &src): _type(src._type), _xp(src._xp) {
	return;
}

AMateria::~AMateria(void) {
	return;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	this->copyMember(rhs);
	return *this;
}

void AMateria::copyMember(const AMateria &rhs){
	this->_type = rhs._type;
	this->_xp = rhs._xp;
}

const std::string &AMateria::getType(void) const {
	return this->_type;
}

unsigned int AMateria::getXP(void) const{
	return this->_xp;
}

void AMateria::use(ICharacter &target) {
	this->_xp += 10;
	(void)target;
}
