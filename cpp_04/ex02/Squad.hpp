#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad {

private:
	int _count;
	ISpaceMarine **_units;

public:
	Squad(void);
	Squad(const Squad &src);
	~Squad(void);
	Squad &operator=(const Squad &rhs);

	int getCount(void) const;
	ISpaceMarine *getUnit(int n) const;
	int push(ISpaceMarine *unit);

};

#endif