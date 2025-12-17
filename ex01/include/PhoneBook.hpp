/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:37:43 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/17 23:46:53 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string.h>

class	PhoneBook
{
	public:
		PhoneBook();
		void	add();
		void	search();
	private:
		size_t	nb_contacts;
		size_t	index;
		Contact	contacts[8];
};

#endif
