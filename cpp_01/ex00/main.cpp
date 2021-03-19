#include "Pony.hpp"

void ponyOnTheHeap(std::string name, int speed) {
	Pony *myHeapPony = new Pony(name, speed);

	myHeapPony->run();
	delete myHeapPony;
}

void ponyOnTheStack(std::string name, int speed) {
	Pony myStackPony(name, speed);

	myStackPony.run();
}

int main(void) {
	ponyOnTheHeap("heaPony", 100);
	ponyOnTheStack("staPony", 200);
}
