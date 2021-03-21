#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called\n";
	this->_value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return this->_value;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called\n";
	this->_value = raw;
}
