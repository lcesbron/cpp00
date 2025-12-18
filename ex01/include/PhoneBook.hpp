/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:37:43 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/18 00:20:02 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string.h>

# ifndef MAX_CONTACT
#  define MAX_CONTACT 8
# endif

class	PhoneBook
{
	public:
		PhoneBook();
		int	add();
		int	search() const;
	private:
		size_t	_nb_contacts;
		size_t	_index;
		Contact	_contacts[MAX_CONTACT];
};

#endif
