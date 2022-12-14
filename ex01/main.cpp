#include "PhoneBook.hpp"

//#include <iostream>
//#include <string>
//#include <limits>

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Hello, is my PhoneBook. Enter the command if you want\n1. ADD\n2. SEARCH\n3. EXIT" << std::endl;
		std::cout << "> ";
		std::getline(std::cin >> std::ws, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cin.clear();
			std::clearerr(stdin);
//			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (cmd.compare("ADD") == 0)
			phonebook.addContact();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.searchContact();
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "cmd not found, try again." << std::endl;
	}
	return (0);
}
