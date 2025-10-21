/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:42:43 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/21 15:17:04 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

void checkLevel(std::string level, Harl& h);

int main(int argc, char* argv[]) {
	Harl		harl;
	
	if (argc != 2)
	return (1);
	
	std::string	level(argv[1]);
	harl.complain(level);
	// checkLevel("DEBUG", harl);
	// checkLevel("INFO", harl);
	// checkLevel("WARNING", harl);
	// checkLevel("ERROR", harl);
	// checkLevel("debug", harl);
	// checkLevel("", harl);
	// checkLevel("aaa", harl);
	
	return (0);
}

void checkLevel(std::string level, Harl& h) {
	std::cout << "===\"" << level << "\"===" << std::endl;
	h.complain(level);
	std::cout << std::endl;
}

