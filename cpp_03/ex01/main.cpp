#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	srand((unsigned int)time(NULL));

	std::cout << "\n\n===========FRAGTRAP===========\n\n";

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

	std::cout << "\n\n===========SCAVTRAP===========\n\n";

	ScavTrap myST("sunpark");

	myST.meleeAttack("corona");
	myST.rangedAttack("virus");
	myST.takeDamage(20);
	myST.takeDamage(5);
	std::cout << myST;
	myST.challengeNewcomer();
	myST.challengeNewcomer();
	myST.challengeNewcomer();

	ScavTrap yourST(myST);
	std::cout << yourST;
	yourST.setName("gwoopark");
	yourST.beRepaired(10);
	std::cout << myST;
	std::cout << yourST;
}