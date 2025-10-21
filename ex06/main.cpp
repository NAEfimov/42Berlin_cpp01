/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:42:43 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/21 16:38:01 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2)
	return (1);
	
	Harl harl;
	std::string	level(argv[1]);
	harl.complain(level);
	
	return (0);
}