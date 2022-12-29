#include "PhoneBook.hpp"

void	PhoneBook::addContact()
{
	Contact	contact;

	contact.inputContact();
	++len;
}

void	PhoneBook::searchContact()
{
	int	index;

	index = -1;
	printBook();
	std::cout << "Enter the index to search" << std::endl;
	std::cin >> index;
	printPhoneBook(index);
}

void	PhoneBook::printPhoneBook(int& index)
{
	contact[&index].printInfo();
}

void	PhoneBook::printBook()
{
	int	index;

	index = -1;
        std::cout << std::setw(10) << "index" << '|';
        std::cout << std::setw(10) << "first name" << '|';
        std::cout << std::setw(10) << "last name" << '|';
        std::cout << std::setw(10) << "nick name" << '|' << std::endl;
	while (++index < len)
		contact[index].printContact(index);
}
