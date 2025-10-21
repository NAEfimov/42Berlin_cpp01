/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:48:16 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/21 14:20:38 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

#define CMD_NUM 4

Harl::Harl(void) {}

void Harl::complain(std::string level) {
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning,
								 &Harl::error};

	for (int i = 0; i < CMD_NUM; ++i) {
		if (level == levels[i]) {
			(this->*actions[i])();
			return;
		}
	}	
	std::cout << "Wrong level name: \"" << level << "\"" << std::endl; 
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple" <<
				 "-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
				 "You didn’t put enough bacon in my burger! If you did, " <<
				 "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. " <<
				 "I’ve been coming for years, whereas you started " <<
				 "working here just last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! " <<
				 "I want to speak to the manager now." << std::endl;
}