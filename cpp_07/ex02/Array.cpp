#include "Array.hpp"

template<typename T>
Array<T>::Array(void): _size(0), _elements(NULL) {}

template<typename T>
Array<T>::Array(unsigned int n): _size(n), _elements(NULL) {
	this->_elements = new T[n]();
}

template<typename T>
Array<T>::Array(const Array<T> &src): _size(src._size), _elements(NULL) {
	if (this->_size == 0)
		return;
	this->_elements = new T[n]();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_elements[i] = src._elements[i];
}

template<typename T>
Array<T>::~Array(void) {
	delete[] this->_elements;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs) {
	
}

template<typename T>
const char *Array<T>::ForbiddenIndex::what() const throw() {

}

template<typename T>
T &Array<T>::operator[](unsigned int idx) {

}

template<typename T>
const T &Array<T>::operator[](unsigned int idx) const {

}

template<typename T>
unsigned int Array<T>::size(void) const {

}
