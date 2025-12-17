/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:16:37 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/17 23:44:56 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:
		Contact();
		void	CreateNewContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string secret);
		std::string const &get_first_name() const;
		std::string const &get_last_name() const;
		std::string const &get_nickname() const;
		std::string const &get_phone_number() const;
		std::string const &get_secret() const;
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_secret;
};

#endif
