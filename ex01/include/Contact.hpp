/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:16:37 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/18 00:20:04 by lcesbron         ###   ########lyon.fr   */
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
		void	PrintContact(void) const;
		void	PrintContactLine(size_t index) const;
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_secret;
};

#endif
