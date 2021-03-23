#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class ScavTrap {

private:
	int _hp;
	int _maxHP;
	int _ep;
	int _maxEP;
	int _level;
	std::string _name;
	int _meleeDamage;
	int _rangedDamage;
	int _armorReduction;

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &rhs);
	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setName(std::string name);
	std::string getName(void) const;
	int getHP(void) const;
	int getMaxHP(void) const;
	int getEP(void) const;
	int getMaxEP(void) const;
	int getLevel(void) const;
	void challengeNewcomer(void);

};

std::ostream &operator<<(std::ostream &o, const ScavTrap &rhs);

#endif
