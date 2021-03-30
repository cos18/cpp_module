#include "span.hpp"
#include <climits>
#include <vector>
#include <ctime>

int main(void){
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "======CUSTOM======\n\n";

	std::cout << "Testing INT_MIN and INT_MAX...\n";

	Span test = Span(2);
	test.addNumber(INT_MAX);
	test.addNumber(INT_MIN);

	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	std::cout << "\nTesting Errors...\n";

	Span testError = Span(3);
	try {
		testError.addNumber(10);
		std::cout << testError.shortestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		testError.addNumber(20);
		testError.addNumber(40);
		testError.addNumber(50);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << testError.shortestSpan() << std::endl;
	std::cout << testError.longestSpan() << std::endl;

	std::cout << "\nTesting Iterators...\n";

	srand(time(NULL));
	Span testIter = Span(10000);
	std::vector<int> randint;
	for (int i = 0; i < 10000; i++)
		randint.push_back(rand());
	testIter.addNumber(randint.begin(), randint.end());
	std::cout << testIter.shortestSpan() << std::endl;
	std::cout << testIter.longestSpan() << std::endl;
	std::cout << "min: " << *std::min_element(randint.begin(), randint.end()) << std::endl;
	std::cout << "max: " << *std::max_element(randint.begin(), randint.end()) << std::endl;
}