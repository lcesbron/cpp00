/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:46:31 by lcesbron          #+#    #+#             */
/*   Updated: 2025/12/17 23:33:28 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	p;
	std::string	line;

	std::cout << "ADD | SEARCH | EXIT" << std::endl;
	std::getline(std::cin, line);
	if (line == "ADD")
		p.add();
	else if (line == "SEARCH")
		p.search();
}
