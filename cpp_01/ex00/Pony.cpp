#include "Pony.hpp"

Pony::Pony(std::string name, int speed): _name(name), _speed(speed) {
	std::cout << "Pony " << this->_name << " created!\n";
}

Pony::~Pony(void) {
	std::cout << "Pony " << this->_name << " destroyed!\n";
}

void Pony::run(void) {
	std::cout << "Pony " << this->_name << " run by " << this->_speed << "km/h!!!\n";
}
