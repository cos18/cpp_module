#include "span.hpp"

Span::Span(void): _size(0) {}

Span::Span(unsigned int size): _size(size) {}

Span::Span(const Span &src): _size(src._size) {
	this->_set.clear();
	this->_set = src._set;
}

Span::~Span(void) {
	this->_set.clear();
}

Span &Span::operator=(const Span &rhs) {
	this->_size = rhs._size;
	this->_set.clear();
	this->_set = rhs._set;
	return *this;
}

const char *Span::FullSpanException::what() const throw() {
	return "FullSpanException: Adding more than size of span!";
}

const char *Span::NoSpanToFindException::what() const throw() {
	return "NoSpanToFindException: Enough data for get span!";
}

void Span::addNumber(int num) {
	if (this->_set.size() == this->_size)
		throw Span::FullSpanException();
	else
		this->_set.insert(num);
}

long long Span::shortestSpan(void) {
	if (this->_set.size() <= 1)
		throw Span::NoSpanToFindException();
	std::multiset<int>::iterator locate = this->_set.begin();
	std::multiset<int>::iterator next = ++(this->_set.begin());
	long long locateVal = *locate;
	long long nextVal = *next;
	long long result = nextVal - locateVal;
	while (next != this->_set.end()) {
		locateVal = *locate;
		nextVal = *next;
		long long diff = nextVal - locateVal;
		if (diff < result)
			result = diff;
		locate++;
		next++;
	}
	return result;
}

long long Span::longestSpan(void) {
	if (this->_set.size() <= 1)
		throw Span::NoSpanToFindException();
	long long max = *(std::max_element(this->_set.begin(), this->_set.end()));
	long long min = *(std::min_element(this->_set.begin(), this->_set.end()));
	return (max - min);
}