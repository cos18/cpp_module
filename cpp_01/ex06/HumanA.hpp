#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {

private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanA(void);
	HumanA(std::string name);
	HumanA(std::string name, Weapon *weapon);
	void setWeapon(Weapon *weapon);
	void attack(void);

};

#endif