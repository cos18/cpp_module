#include "ZombieHorde.hpp"

std::string random_string()
{
	std::string eng("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	std::string result("");

	for (int i = 0; i < 10; i++)
		result += eng[rand() % eng.length()];
	return result;
}

ZombieHorde::ZombieHorde(int n, std::string type): _n(n), _type(type) {
	if (n <= 0) {
		std::cout << "[ERROR] Wrong Horde number set!!\n";
		return;
	}
	this->_zbs = new Zombie[n];
	for (int i = 0; i < n; i++) {
		this->_zbs[i].setZombieInfo(random_string(), this->_type);
	}
}

ZombieHorde::~ZombieHorde(void) {
	if (this->_n <= 0)
		return;
	delete [] this->_zbs;
}

void ZombieHorde::announce(void) {
	if (this->_n <= 0) {
		std::cout << "[ERROR] Wrong Horde number set!!\n";
		return;
	}
	for (int i = 0; i < this->_n; i++) {
		this->_zbs[i].announce();
	}
}
