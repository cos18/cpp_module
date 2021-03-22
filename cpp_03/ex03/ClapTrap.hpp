#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class ClapTrap {

protected:
	int _hp;
	int _maxHP;
	int _ep;
	int _maxEP;
	int _level;
	std::string _name;
	int _meleeDamage;
	int _rangedDamage;
	int _armorReduction;
	std::string _type;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	virtual ~ClapTrap(void);
	ClapTrap &operator=(const ClapTrap &rhs);

	void copyMember(const ClapTrap &rhs);
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
	std::string getType(void) const;

};

std::ostream &operator<<(std::ostream &o, const ClapTrap &rhs);

#endif
