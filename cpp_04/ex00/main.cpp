#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void) {
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "=============[MYTEST]=============\n\n";

	Victim *p = new Peon("this is peon");
	std::cout << *p;
	robert.polymorph(*p);
	std::cout << "\n\n\n";
	delete p;

	return 0;
}