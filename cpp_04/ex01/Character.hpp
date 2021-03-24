#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

private:
	std::string _name;
	int _ap;
	AWeapon *_weapon;

public:
	Character(void);
	Character(const Character &src);
	Character(const std::string &name);
	~Character(void);
	Character &operator=(const Character &rhs);

	void copyMember(const Character &rhs);
	void recoverAP(void);
	void equip(AWeapon *w);
	void attack(Enemy *e);
	const std::string getName(void) const;
	int getAP(void) const;
	const AWeapon *getWeapon(void) const;
};

std::ostream &operator<<(std::ostream &o, const Character &rhs);

#endif