/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:48:16 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 13:10:16 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

#define CMD_NUM 4

Harl::Harl(void) {}

void Harl::complain(std::string level) {
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	while (i < CMD_NUM) {
		if (level == levels[i])
			break;
		++i;
	}
	
	switch (i) {
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about "
			  		  << "insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
			  << "-pickle-specialketchup burger.\n"
			  << "I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			  << "You didn’t put enough bacon in my burger!\n"
			  << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			  << "I’ve been coming for years, whereas you started "
			  << "working here just last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!\n"
			  << "I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
	