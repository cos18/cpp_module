#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony {

private:
	std::string _name;
	int _speed;

public:
	Pony(std::string name, int speed);
	~Pony(void);
	void run(void);

};
#endif
