#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {

private:
	int _hp;
	std::string _type;

public:
	Enemy(void);
	Enemy(int hp, const std::string &type);
	virtual ~Enemy(void);
	Enemy &operator=(const Enemy &rhs);

	void copyMember(const Enemy &rhs);
	const std::string getType(void) const;
	int getHP(void) const;

	virtual void takeDamage(int damage);

};

#endif
