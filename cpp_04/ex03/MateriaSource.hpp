#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

private:
	AMateria **_sources;
	int _sources_cnt;

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	virtual ~MateriaSource(void);
	MateriaSource &operator=(const MateriaSource &rhs);

	void learnMateria(AMateria *m);
	AMateria* createMateria(const std::string &type);

};

#endif