#include "Form.hpp"

int main(void) {
	Bureaucrat sunpark("sunpark", 50);

	try {
		Form wrong("wrong", 4, 151);
		std::cout << wrong << "\n";
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
	
	std::cout << "\n\n";

	try {
		Form wrong("wrong", 0, 40);
		std::cout << wrong << "\n";
	} catch (const std::exception &e) {
		std::cerr << "CATCH!! " << e.what() << std::endl;
	}
	
	std::cout << "\n\n";

	Form report("report", 50, 100);
	std::cout << report << "\n";
	sunpark.signForm(report);
	sunpark.signForm(report);

	std::cout << "\n\n";

	Form webserv("webserv", 10, 20);
	std::cout << webserv << "\n";
	sunpark.signForm(webserv);
}