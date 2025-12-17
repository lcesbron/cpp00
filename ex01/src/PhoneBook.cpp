/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:31:42 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/18 00:17:10 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	this->nb_contacts = 0;
	this->index = 0;
}

void	PhoneBook::add()
{
	Contact new_contact;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	std::cout << "Enter contact first name." << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "Enter contact last name." << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Enter contact nickname." << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Enter contact phone number." << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "Enter contact darkest secret." << std::endl;
	std::getline(std::cin, secret);
	this->contacts[index].CreateNewContact(first_name, last_name, nickname, phone_number, secret);
	this->index = (this->index + 1) % 8;
}

static void	printContact(size_t index,
						 std::string const &first_name,
						 std::string const &last_name,
						 std::string const &nickname)
{

}

void	PhoneBook::search()
{
	std::string	line;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	if (!this->nb_contacts)
		return ;
	do
	{
		std::cout << "Choose an index" << std::endl;
		std::getline(std::cin, line)
	} while (line.length() == 1 && line[0] - '0' >= 1 && line[0] - '0' <= this->nb_contacts);
}
