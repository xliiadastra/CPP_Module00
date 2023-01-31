#include "PhoneBook.hpp"
# include <sstream>


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
	std::string str;
	int	index(-1);

	printBook();
	std::cout << "Enter the index to search" << std::endl;
	std::cin >> std::ws;
	std::getline(std::cin, str);
	if (std::cin.fail() || std::cin.eof())
	{
		std::cout << "\nError !" << std::endl;
		exit(1);
	}
	if (str.length() > 1)
	{
		std::cout << "Wrong Input !" << std::endl;
		std::cin.clear();
		std::clearerr(stdin);
		return ;
	}

	std::stringstream s(str);
	s >> index;
	if (s.fail())
	{
		std::cin.clear();
		std::cout << "Wrong Input !" << std::endl;
		return ;
	}	
	if (index < 0 || index >= len)
	{
		std::cin.clear();
		std::cout << "Wrong Input !" << std::endl;
	}
	else
		contact[index].printInfo();
}

void	PhoneBook::printPhoneBook(int& index)
{
	std::cout << std::setw(10) << index << '|';
	contact[index].printContact();
}

void	PhoneBook::printBook()
{
	int	index(-1);

        std::cout << std::setw(10) << "index" << '|';
        std::cout << std::setw(10) << "first name" << '|';
        std::cout << std::setw(10) << "last name" << '|';
        std::cout << std::setw(10) << "nick name" << "|" << std::endl;
	while (++index < len)
		printPhoneBook(index);
}
