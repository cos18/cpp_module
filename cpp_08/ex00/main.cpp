#include "easyfind.hpp"
#include <vector>

int main(void) {
	std::vector<int> test(10, 100);

	std::cout << *easyfind(test, 100) << std::endl;
}
