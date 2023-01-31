#include "Contact.hpp"

Contact::Contact()
{
}

void	Contact::inputContact()
{
        std::cout << "Enter Contact Info" << std::endl;

        std::cout << "First Name : ";
        std::cin >> std::ws;
        std::getline(std::cin, first_name);
        if (std::cin.eof() || std::cin.fail())
        {
                std::cout << "\nError !" << std::endl;
                exit(1);
        }

        std::cout << "Last Name : ";
        std::cin >> std::ws;
        std::getline(std::cin, last_name);
        if (std::cin.eof() || std::cin.fail())
        {
                std::cout << "\nError !" << std::endl;
                exit(1);
        }

        std::cout << "Nick Name : ";
        std::cin >> std::ws;
        std::getline(std::cin, nick_name);
        if (std::cin.eof() || std::cin.fail())
        {
                std::cout << "\nError !" << std::endl;
                exit(1);
        }

        std::cout << "Phone Number : ";
        std::cin >> std::ws;
        std::getline(std::cin, phone_number);
        if (std::cin.eof() || std::cin.fail())
        {
                std::cout << "\nError !" << std::endl;
                exit(1);
        }

        std::cout << "Secret : ";
        std::cin >> std::ws;
        std::getline(std::cin, secret);
        if (std::cin.eof() || std::cin.fail())
        {
                std::cout << "\nError !" << std::endl;
                exit(1);
        }
        else
                std::cout << "Created" << std::endl;
}

void	Contact::printContact()
{
	printFormat(first_name);
	printFormat(last_name);
	printFormat(nick_name);
	std::cout << std::endl;
}

void	Contact::printInfo()
{
	std::cout << "First Name : " << first_name << std::endl;	
	std::cout << "Last Name : " << last_name << std::endl;	
	std::cout << "Nick Name : " << nick_name << std::endl;	
	std::cout << "Phone Number : " << phone_number << std::endl;
	std::cout << "Secret : " << secret << std::endl;
}

void	Contact::printFormat(std::string str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << str;
	std::cout << '|';
}
