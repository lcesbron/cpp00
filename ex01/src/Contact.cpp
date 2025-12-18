/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:25:30 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/18 00:20:03 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Contact::Contact() {}

void	Contact::CreateNewContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_secret = secret;
}

void	Contact::PrintContact(void) const
{
	std::cout << "First Name : " << this->_first_name << std::endl ;
	std::cout << "Last Name : " << this->_last_name << std::endl ;
	std::cout << "Nickname : " << this->_nickname << std::endl ;
	std::cout << "Phone Number : " << this->_phone_number << std::endl ;
	std::cout << "Darkest Secret : " << this->_secret << std::endl ;
}

static std::string	format_string(std::string s)
{
	if (s.size() > 10)
	{
		return (s.substr(0, 9) + ".");
	}
	return (s);
}

void	Contact::PrintContactLine(size_t index) const
{
	std::cout << std::setw(10) << index << '|';
	std::cout << std::setw(10) << format_string(this->_first_name) << '|';
	std::cout << std::setw(10) << format_string(this->_last_name) << '|';
	std::cout << std::setw(10) << format_string(this->_nickname) << std::endl;
}

//std::string const &get_first_name() const
//{
//	return (this->first_name);
//}
//
//std::string const &get_last_name() const;
//{
//	return (this->last_name);
//}
//
//std::string const &get_nickname() const;
//{
//	return (this->nickname);
//}
//
//std::string const &get_phone_number() const;
//{
//	return (this->phone_number);
//}
//
//std::string const &get_secret() const;
//{
//	return (this->secret);
//}
