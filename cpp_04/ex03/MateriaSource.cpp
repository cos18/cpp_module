#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _sources(NULL), _sources_cnt(0) {
	this->_sources = new AMateria*[4];
}

MateriaSource::MateriaSource(const MateriaSource &src): _sources(NULL), _sources_cnt(src._sources_cnt) {
	this->_sources = new AMateria*[4];
	for (int i = 0; i < src._sources_cnt; i++) {
		this->_sources[i] = src._sources[i]->clone();
	}
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < this->_sources_cnt; i++) {
		delete this->_sources[i];
	}
	delete[] this->_sources;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	for (int i = 0; i < this->_sources_cnt; i++) {
		delete this->_sources[i];
	}
	this->_sources_cnt = rhs._sources_cnt;
	for (int i = 0; i < rhs._sources_cnt; i++) {
		this->_sources[i] = rhs._sources[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
	if (this->_sources_cnt == 4 || m == NULL)
		return;
	this->_sources[this->_sources_cnt] = m->clone();
	this->_sources_cnt += 1;
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < this->_sources_cnt; i++) {
		if (type.compare(this->_sources[i]->getType()) == 0) {
			return this->_sources[i]->clone();
		}
	}
	return NULL;
}