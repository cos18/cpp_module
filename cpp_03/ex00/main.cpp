#include "FragTrap.hpp"

int main(void) {
	srand((unsigned int)time(NULL));

	FragTrap myFT("sunpark");

	myFT.meleeAttack("corona");
	myFT.rangedAttack("virus");
	myFT.takeDamage(20);
	myFT.takeDamage(5);
	std::cout << myFT;
	myFT.vaulthunter_dot_exe("holee");
	myFT.vaulthunter_dot_exe("holee");
	myFT.vaulthunter_dot_exe("holee");
	std::cout << myFT;
	myFT.vaulthunter_dot_exe("holee");
	myFT.vaulthunter_dot_exe("holee");
	std::cout << myFT;

	FragTrap yourFT(myFT);
	std::cout << yourFT;
	yourFT.setName("gwoopark");
	yourFT.beRepaired(10);
	std::cout << myFT;
	std::cout << yourFT;
}