#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	srand((unsigned int)time(NULL));
	ClapTrap myCT("clapark");
	FragTrap myFT("fragpark");
	ScavTrap myST("scavpark");

	std::cout << "\n\n===========NINJATRAP===========\n\n";

	NinjaTrap myNT("sunpark");

	myNT.meleeAttack("corona");
	myNT.rangedAttack("virus");
	myNT.takeDamage(20);
	myNT.takeDamage(5);
	std::cout << myNT;

	NinjaTrap yourNT(myNT);
	std::cout << yourNT;
	yourNT.setName("gwoopark");
	yourNT.beRepaired(10);
	std::cout << myNT;
	std::cout << yourNT;

	myNT.ninjaShoebox(myCT);
	myNT.ninjaShoebox(myFT);
	myNT.ninjaShoebox(myST);
	myNT.ninjaShoebox(yourNT);
}