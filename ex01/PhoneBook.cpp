#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->len = 0;
	this->last = 0;
}

void	PhoneBook::addContact()
{
	Contact	contact;

	contact.inputContact();
	this->contact[last] = contact;
	++last;
	if (last == 8)
		last = 0;
	if (len < 8)
		++len;
}

void	PhoneBook::searchContact()
{
	int	index;

	index = -1;
	printBook();
	std::cout << "Enter the index to search" << std::endl;
	std::cin >> std::ws >> index;
	contact[index].printInfo();
}

void	PhoneBook::printPhoneBook(int& index)
{
	std::cout << std::setw(10) << index << '|';
	contact[index].printContact();
}

void	PhoneBook::printBook()
{
	int	index;

	index = -1;
        std::cout << std::setw(10) << "index" << '|';
        std::cout << std::setw(10) << "first name" << '|';
        std::cout << std::setw(10) << "last name" << '|';
        std::cout << std::setw(10) << "nick name" << "|" << std::endl;
	while (++index < len)
		printPhoneBook(index);
}
