#include "ZombieEvent.hpp"

int main(void) {
	srand((unsigned int)time(NULL));

	std::cout << "\n[[Standard Zombie]]\n\n";
	Zombie standard("sz", "normal zombie");
	standard.announce();

	std::cout << "\n[[ZombieEvent]]\n\n";
	ZombieEvent ze;
	ze.setZombieType("event zombie");
	Zombie *zeZombie = ze.newZombie("ze");
	zeZombie->announce();
	delete zeZombie;

	std::cout << "\n[[RANDOM ZombieEvent]]\n\n";
	Zombie *randomZombie = ze.randomChump();
	randomZombie->announce();
	delete randomZombie;
}
