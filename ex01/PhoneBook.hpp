#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class	PhoneBook
{
private:
	Contact	contact[8];
	int	len;
	int	last;
	void	printPhoneBook(int& index);
	void	printBook();
public:
	PhoneBook();
	void	addContact();
	void	searchContact();
};

#endif
