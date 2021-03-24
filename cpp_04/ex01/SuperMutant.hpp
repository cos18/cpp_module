#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy {

public:
	SuperMutant(void);
	SuperMutant(const SuperMutant &src);
	~SuperMutant(void);
	SuperMutant &operator=(const SuperMutant &rhs);

	void takeDamage(int damage);

};

#endif