#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &src): _name(src._name), _title(src._title) {
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer &Sorcerer::operator=(const Sorcerer &rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}

std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}

void Sorcerer::polymorph(const Victim &v) const {
	v.getPolymorphed();
}

std::ostream &operator<<(std::ostream &o, const Sorcerer &rhs) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!\n";
	return o;
}


