#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria {

private:
	std::string _type;
	unsigned int _xp;

public:
	AMateria(void);
	AMateria(const std::string &type);
	AMateria(const AMateria &src);
	virtual ~AMateria(void);
	AMateria &operator=(const AMateria &rhs);

	void copyMember(const AMateria &rhs);
	const std::string &getType(void) const;
	unsigned int getXP(void) const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter &target);
};

#endif
