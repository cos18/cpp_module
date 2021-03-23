#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &src): Victim(src._name) {
	std::cout << "Zog zog.\n";
}

Peon::~Peon(void) {
	std::cout << "Bleuark...\n";
}

Peon &Peon::operator=(const Peon &rhs) {
	this->copyMember(rhs);
	return *this;
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony!\n";
}
