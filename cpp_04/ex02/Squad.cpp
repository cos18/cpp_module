#include "Squad.hpp"

Squad::Squad(void): _count(0), _units(NULL) {
	return;
}

Squad::Squad(const Squad &src): _count(0), _units(NULL) {
	for (int i = 0; i < src.getCount(); i++) {
		this->push(src.getUnit(i)->clone());
	}
}

Squad::~Squad(void) {
	if (this->_units) {
		for (int i = 0; i < this->_count; i++)
			delete this->_units[i];
		delete[] this->_units;
	}
}

Squad &Squad::operator=(const Squad &rhs) {
	if (this->_units) {
		for (int i = 0; i < this->_count; i++)
			delete this->_units[i];
		delete[] this->_units;
		this->_units = NULL;
	}
	this->_count = 0;
	for (int i = 0; i < rhs.getCount(); i++) {
		this->push(rhs.getUnit(i)->clone());
	}
	return *this;
}

int Squad::getCount(void) const {
	return this->_count;
}

ISpaceMarine *Squad::getUnit(int n) const {
	if (n < 0 || n >= this->_count)
		return NULL;
	return this->_units[n];
}

int Squad::push(ISpaceMarine *unit) {
	if (unit == NULL)
		return this->_count;
	if (this->_units) {
		for (int i = 0; i < this->_count; i++) {
			if (this->_units[i] == unit)
				return this->_count;
		}
		ISpaceMarine **result = new ISpaceMarine*[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			result[i] = this->_units[i];
		delete[] this->_units;
		result[this->_count] = unit;
		this->_count += 1;
		this->_units = result;
	} else {
		this->_units = new ISpaceMarine*[1];
		this->_units[0] = unit;
		this->_count = 1;
	}
	return this->_count;
}
