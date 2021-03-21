#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called\n";
	this->_value = (value << Fixed::_bits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called\n";
	this->_value = roundf(value * (1 << Fixed::_bits));
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

int Fixed::toInt(void) const {
	return (this->_value >> Fixed::_bits);
}

float Fixed::toFloat(void) const {
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}

std::ostream &operator<<(std::ostream &o, const Fixed &value){
	o << value.toFloat();
	return o;
}
