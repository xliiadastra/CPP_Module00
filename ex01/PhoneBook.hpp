/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:18:42 by yichoi            #+#    #+#             */
/*   Updated: 2022/12/11 17:56:19 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>
#include "Contact.hpp"

class	PhoneBook
{
private:
	Contact	contact[8];
	int	last;

public: // access specifier
	PhoneBook();
	void	addContact();
};

#endif
