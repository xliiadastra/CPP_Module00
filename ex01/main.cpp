//#include "PhoneBook.hpp"
//#include "Contact.hpp"

#include <iostream>
#include <string>

int	main()
{
	std::cout << "Hello, is my PhoneBook. Enter the command if you want\n1. ADD\n2. SEARCH\n3. EXIT" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::string	cmd;
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			std::cout << "Yes, add" << std::endl;
		else if (cmd.compare("SEARCH") == 0)
			std::cout << "Yes, search" << std::endl;
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "cmd not found, try again." << std::endl;
	}
	return (0);
}
