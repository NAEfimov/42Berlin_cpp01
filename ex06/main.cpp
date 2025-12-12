/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:42:43 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 13:06:07 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Wrong arguments (./harlFilter <string>)" << std::endl;
		return (1);
	}
	
	Harl harl;
	harl.complain(std::string(argv[1]));

	return (0);
}