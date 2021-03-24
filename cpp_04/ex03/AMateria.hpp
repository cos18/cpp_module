#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

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
	const std::string &getType(void) const; //Returns the materia type
	unsigned int getXP(void) const; //Returns the Materia's XP
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter &target);
};

#endif
