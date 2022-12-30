/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinoh <jinoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:42:37 by jinoh             #+#    #+#             */
/*   Updated: 2022/09/15 14:42:37 by jinoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->len = 0;
	this->last = 0;
}

void 	PhoneBook::addContact()
{
	Contact contact;
	contact.enterContact();
	this->contact[last] = contact;
	last++;
	if (this->last == 8)
		this->last = 0;
	if (this->len < 8)
		(this->len)++;
}

void	PhoneBook::searchContact()
{
	int	i;

	printBook();
	std::cout << "Enter an Index: \n";
	std::cin >> i;
	if (std::cin.fail() || i < 0 || i >= len)
	{
		std::cin.clear();
		std::cout << "Wrong Input!\n";
	}
	else {
		contact[i].printInfo();
	}
	std::cin.ignore(); // to flush the buffer
}

void 	PhoneBook::printBook()
{
	int i;

	i = -1;
	std::cout << "     index" << '|' << \
	"first name" << '|' << \
	" last name" << '|' << \
	" nick name" << '|' << '\n';
	while (++i < this->len)
		printContact(i);
}

void	PhoneBook::printContact(int i)
{
	std::cout << "         " << i << '|';
	contact[i].printContact();
}
