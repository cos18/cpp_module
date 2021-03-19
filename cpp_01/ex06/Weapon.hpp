#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

private:
	std::string _type;

public:
	Weapon(void);
	Weapon(std::string type);
	void setType(std::string type);
	const std::string &getType(void);

};

#endif