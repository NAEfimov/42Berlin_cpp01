/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:11:57 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/10 14:29:19 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#define COL_WIDTH 19

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << std::setw(COL_WIDTH) <<
		"str address: " << &str << std::endl;
	std::cout << std::setw(COL_WIDTH) <<
		"stringPTR address: " << stringPTR << std::endl;
	std::cout << std::setw(COL_WIDTH) <<
		"stringREF address: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << std::setw(COL_WIDTH) <<
		"str value: " << "'" << str << "'" << std::endl;
	std::cout << std::setw(COL_WIDTH) <<
		"stringPTR value: " << "'" << *stringPTR << "'" << std::endl;
	std::cout << std::setw(COL_WIDTH) <<
		"stringREF value: " << "'" << stringREF << "'" << std::endl;
}