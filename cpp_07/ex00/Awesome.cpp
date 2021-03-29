#include "Awesome.hpp"

Awesome::Awesome(void) {}

Awesome::Awesome(int n): _n(n) {}

Awesome::Awesome(const Awesome &src) {
	this->_n = src._n;
}

Awesome::~Awesome(void) {}

bool Awesome::operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool Awesome::operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool Awesome::operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
bool Awesome::operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
bool Awesome::operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool Awesome::operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

int Awesome::getN(void) const {
	return this->_n;
}

std::ostream &operator<<(std::ostream &o, const Awesome &rhs) {
	o << rhs.getN();
	return o;
}
