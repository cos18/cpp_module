#include "ZombieHorde.hpp"

int main(void) {
	srand((unsigned int)time(NULL));

	std::cout << "\n[[ZombieHorde]]\n\n";
	ZombieHorde zh(10, "zh");
	zh.announce();

	std::cout << "\n[[WRONG ZombieHorde]]\n\n";
	ZombieHorde wrong_zh(-10, "zh");
	wrong_zh.announce();
}
