/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:25:30 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/17 23:46:45 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void	Contact::CreateNewContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_secret = secret;
}

std::string const &get_first_name() const
{
	return (this->first_name);
}

std::string const &get_last_name() const;
{
	return (this->last_name);
}

std::string const &get_nickname() const;
{
	return (this->nickname);
}

std::string const &get_phone_number() const;
{
	return (this->phone_number);
}

std::string const &get_secret() const;
{
	return (this->secret);
}
