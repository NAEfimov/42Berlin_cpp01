/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:37:15 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/13 18:10:27 by nefimov          ###   ########.fr       */
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
	weapon = &new_weapon;
}

void HumanB::attack(void) {
	if (weapon == NULL)
		std::cout << name << " is unarmed!" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}