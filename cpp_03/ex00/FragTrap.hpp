#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class FragTrap:  {

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
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &rhs);
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
	void vaulthunter_dot_exe(std::string const & target);

};

std::ostream &operator<<(std::ostream &o, const FragTrap &rhs);

#endif
