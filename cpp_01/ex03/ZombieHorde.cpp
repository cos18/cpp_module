#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _n(n) {
	if (n <= 0)
	
	this->_zbs = new Zombie[n];
}

ZombieHorde::~ZombieHorde(void) {

}

std::string random_string()
{
	std::string eng("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	std::string result("");

	for (int i = 0; i < 10; i++)
		result += eng[rand() % eng.length()];
	return result;
}

void ZombieHorde::announce(void) {
	Zombie *result = new Zombie(random_string(), this->_type);
	result->announce();
	return result;
}
