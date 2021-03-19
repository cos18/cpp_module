#include "Human.hpp"

const Brain &Human::getBrain(void) const{
	return this->_brain;
}

std::string Human::identify(void) const{
	return this->_brain.identify();
}