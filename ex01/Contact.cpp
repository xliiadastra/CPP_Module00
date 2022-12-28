#include "Contact.hpp"

void	Contact::inputContact()
{
        std::cout << "Enter Contact Info" << std::endl;

        std::cout << "First name : ";
        std::cin >> std::ws;
        std::getline(std::cin, first_name);

        std::cout << "Last name : ";
        std::cin >> std::ws;
        std::getline(std::cin, last_name);

        std::cout << "Nick name : ";
        std::cin >> std::ws;
        std::getline(std::cin, nick_name);

        std::cout << "Phone number : ";
        std::cin >> std::ws;
        std::getline(std::cin, phone_number);

        std::cout << "Secret : ";
        std::cin >> std::ws;
        std::getline(std::cin, secret);
}
