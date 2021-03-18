#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	void addData(void);
	void displayData(int index);
	void displayFullData(void);

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal;
	std::string email;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};

#endif