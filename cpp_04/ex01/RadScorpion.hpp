#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy {

public:
	RadScorpion(void);
	RadScorpion(const RadScorpion &src);
	~RadScorpion(void);
	RadScorpion &operator=(const RadScorpion &rhs);

	void takeDamage(int damage);

};

#endif