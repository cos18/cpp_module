#ifndef I_MATERIA_SOURCE_HPP
# define I_MATERIA_SOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {

public:
	virtual ~IMateriaSource(void) {}
	virtual void learnMateria(AMateria *m) = 0;
	virtual AMateria* createMateria(const std::string &type) = 0;

};

#endif