/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:37:15 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/13 18:05:57 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nm) : name(nm) {
	weapon = NULL;
}

HumanB::~HumanB(void) {
}

void HumanB::setWeapon(Weapon& new_weapon) {
	// std::cout << weapon << std::endl;
	weapon = &new_weapon;
	// std::cout << weapon->getType() << " | " << weapon << std::endl;
}

void HumanB::attack(void) {
	// <name> attacks with their <weapon type>
	// std::cout << weapon << std::endl;
	if (weapon == NULL)
		std::cout<< name << " is unarmed!" << std::endl;
	else
		std::cout<< name << " attacks with their " << weapon->getType() << std::endl;
}