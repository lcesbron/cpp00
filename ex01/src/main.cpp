/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:46:31 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/18 00:20:05 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	line;

	std::cout << "ADD | SEARCH | EXIT" << std::endl;
	while (std::getline(std::cin, line) && line != "EXIT")
	{
		if (line == "ADD")
		{
			if (phonebook.add()) {return (EXIT_FAILURE);}
		}
		else if (line == "SEARCH")
		{
			if (phonebook.search()) {return (EXIT_FAILURE);}
		}
		std::cout << "ADD | SEARCH | EXIT" << std::endl;
	}
}
