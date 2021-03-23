#include "Victim.hpp"

Victim::Victim(std::string name): _name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!\n";
}

Victim::Victim(const Victim &src): _name(src._name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!\n";
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!\n";
}

Victim &Victim::operator=(const Victim &rhs) {
	this->copyMember(rhs);
	return *this;
}

std::string Victim::getName(void) const {
	return this->_name;
}

void Victim::copyMember(const Victim &rhs) {
	this->_name = rhs._name;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep!\n";
}

std::ostream &operator<<(std::ostream &o, const Victim &rhs) {
	o << "I'm " << rhs.getName() << " and I like otters!\n";
	return o;
}


