#ifndef A_WEAPON_HPP
# define A_WEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {

private:
	std::string _name;
	int _apcost;
	int _damage;

public:
	AWeapon(void);
	AWeapon(const std::string &name, int apcost, int damage);
	virtual ~AWeapon(void);
	AWeapon &operator=(const AWeapon &rhs);

	void copyMember(const AWeapon &rhs);
	const std::string getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;

};

#endif