/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:31:42 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/18 00:20:00 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
	this->_nb_contacts = 0;
	this->_index = 0;
}

int	PhoneBook::add()
{
	Contact new_contact;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	std::cout << "Enter contact first name." << std::endl;
	if (!std::getline(std::cin, first_name)) {return (EXIT_FAILURE);}
	std::cout << "Enter contact last name." << std::endl;
	if (!std::getline(std::cin, last_name)) {return (EXIT_FAILURE);}
	std::cout << "Enter contact nickname." << std::endl;
	if (!std::getline(std::cin, nickname)) {return (EXIT_FAILURE);}
	std::cout << "Enter contact phone number." << std::endl;
	if (!std::getline(std::cin, phone_number)) {return (EXIT_FAILURE);}
	std::cout << "Enter contact darkest secret." << std::endl;
	if (!std::getline(std::cin, secret)) {return (EXIT_FAILURE);}
	this->_contacts[this->_index].CreateNewContact(first_name, last_name, nickname, phone_number, secret);
	if (this->_nb_contacts < MAX_CONTACT)
		++this->_nb_contacts;
	this->_index = (this->_index + 1) % MAX_CONTACT;
	return (EXIT_SUCCESS);
}

int	PhoneBook::search() const
{
	std::string	line;
	size_t		i;

	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	i = 0;
	while (i < this->_nb_contacts)
	{
		_contacts[i].PrintContactLine(i + 1);
		++i;
	}
	if (this->_nb_contacts)
	{
		do
		{
			std::cout << "Choose an index" << std::endl;
			if (!std::getline(std::cin, line)) {return (EXIT_FAILURE);}
		} while (line.length() != 1 || line[0] - '0' < 1 || (size_t)(line[0] - '0') > this->_nb_contacts);
		this->_contacts[(line[0] - '0') - 1].PrintContact();
	}
	return (EXIT_SUCCESS);
}
