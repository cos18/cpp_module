#include "Character.hpp"

Character::Character(void): _name(""), _materias(NULL) {
	this->_materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(const std::string &name): _name(name), _materias(NULL) {
	this->_materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(const Character &src): _name(src._name), _materias(NULL) {
	this->_materias = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		if (src._materias[i] != NULL)
			this->_materias[i] = src._materias[i]->clone();
	}
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	delete[] this->_materias;
}

Character &Character::operator=(const Character &rhs) {
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		this->_materias[i] = rhs._materias[i];
	}
	return *this;
}

const std::string &Character::getName(void) const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (m == NULL)
		return;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] && this->_materias[i] == m)
			return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] == NULL) {
			this->_materias[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || this->_materias[idx] == NULL)
		return;
	this->_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || this->_materias[idx] == NULL)
		return;
	this->_materias[idx]->use(target);
}
