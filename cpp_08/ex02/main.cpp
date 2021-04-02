#include "MutantStack.hpp"
#include <iostream>

int main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	MutantStack<int> s(mstack);
	for (MutantStack<int>::reverse_iterator rit = s.rbegin(); rit != s.rend(); rit++) {
		std::cout << *rit << std::endl;
	}
	return 0;
}