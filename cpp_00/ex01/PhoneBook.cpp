#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::addData(void) {
	std::string tmp;
	std::cin.ignore();
	std::cout << "[[ADD DATA]]\n\n";
	std::cout << "First Name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last Name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Login: ";
	std::getline(std::cin, this->login);
	std::cout << "Postal Address: ";
	std::getline(std::cin, this->postal);
	std::cout << "Email Address: ";
	std::getline(std::cin, this->email);
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Birthday Date: ";
	std::getline(std::cin, this->birthday_date);
	std::cout << "Favorite Meal: ";
	std::getline(std::cin, this->favorite_meal);
	std::cout << "Underwear Color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void PhoneBook::displayData(int index) {
	std::cout << "|" << std::setw(10) << index << "|";
	if (this->first_name.length() >= 10)
		std::cout << this->first_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() >= 10)
		std::cout << this->last_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() >= 10)
		std::cout << this->nickname.substr(0, 9) << "." << "|\n";
	else
		std::cout << std::setw(10) << this->nickname << "|\n";
}

void PhoneBook::displayFullData(void) {
	std::cout << "First Name: " << this->first_name << "\n";
	std::cout << "Last Name: " << this->last_name << "\n";
	std::cout << "Nickname: " << this->nickname << "\n";
	std::cout << "Login: " << this->login << "\n";
	std::cout << "Postal Address: " << this->postal << "\n";
	std::cout << "Email Address: " << this->email << "\n";
	std::cout << "Phone Number: " << this->phone_number << "\n";
	std::cout << "Birthday Date: " << this->birthday_date << "\n";
	std::cout << "Favorite Meal: " << this->favorite_meal << "\n";
	std::cout << "Underwear Color: " << this->underwear_color << "\n";
	std::cout << "Darkest Secret: " << this->darkest_secret << "\n";
}
