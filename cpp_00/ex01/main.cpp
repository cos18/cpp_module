#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	book[8];
	int			book_cnt = 0;
	std::string cmd;
	int			input_number;

	while (true) {
		std::cout << "\n[MY PHONEBOOK]\n\n> ";
		std::cin >> cmd;

		if (cmd.compare("ADD") == 0) {
			if (book_cnt == 8) {
				std::cout << "[ERROR] Phonebook is FULL!\n";
				continue;
			}
			book[book_cnt].addData();
			book_cnt++;
		} else if (cmd.compare("SEARCH") == 0) {
			if (book_cnt == 0) {
				std::cout << "[ERROR] Phonebook is EMPTY!\n";
				continue;
			}
			std::cout << "|" << std::setw(10) << "index" << "|" << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|\n";
			std::cout << "|==========|==========|==========|==========|\n";
			for (int index = 1; index <= book_cnt; index++)
				book[index - 1].displayData(index);
			std::cout << "\n> ";
			std::cin >> cmd;
			input_number = atoi(cmd.c_str());
			if (input_number <= 0 || input_number > book_cnt) {
				std::cout << "[ERROR] Input index out of range!\n";
				continue;
			}
			std::cout << "\n[Detail from index " << input_number << "]\n";
			book[input_number - 1].displayFullData();
		} else if (cmd.compare("EXIT") == 0)
			break;
		else
			std::cout << "[ERROR] Wrong command! Try \"ADD\", \"SEARCH\", \"EXIT\"\n";
	}
	return 0;
}