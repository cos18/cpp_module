#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	srand((unsigned int)time(NULL));
	ClapTrap myCT("clapark");
	FragTrap myFT("fragpark");
	ScavTrap myST("scavpark");
	NinjaTrap myNT("ninpark");

	std::cout << "\n\n===========SUPERTRAP===========\n\n";

	SuperTrap mySuT("sunpark");

	mySuT.meleeAttack("corona");
	mySuT.rangedAttack("virus");
	mySuT.takeDamage(20);
	mySuT.takeDamage(5);
	std::cout << mySuT;

	mySuT.vaulthunter_dot_exe("honlee");
	mySuT.vaulthunter_dot_exe("honlee");
	mySuT.vaulthunter_dot_exe("honlee");

	SuperTrap yourST(mySuT);
	std::cout << yourST;
	yourST.setName("gwoopark");
	yourST.beRepaired(10);
	std::cout << mySuT;
	std::cout << yourST;

	mySuT.ninjaShoebox(myCT);
	mySuT.ninjaShoebox(myFT);
	mySuT.ninjaShoebox(myST);
	mySuT.ninjaShoebox(myNT);
}