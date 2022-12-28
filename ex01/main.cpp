#include "PhoneBook.hpp"

//#include <iostream>
//#include <string>
//#include <limits>

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

//	std::cout << "Hello, is my PhoneBook. Enter the command if you want\n1. ADD\n2. SEARCH\n3. EXIT" << std::endl;
	while (1)
	{
		std::cout << "Hello, is my PhoneBook. Enter the command if you want\n1. ADD\n2. SEARCH\n3. EXIT" << std::endl;
		std::cout << "> ";
//		std::cin >> std::ws;
		std::getline(std::cin >> std::ws, cmd);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (cmd.compare("ADD") == 0)
			phonebook.addContact();
		else if (cmd.compare("SEARCH") == 0)
			std::cout << "Yes, search" << std::endl;
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "cmd not found, try again." << std::endl;
	}
	return (0);
}
