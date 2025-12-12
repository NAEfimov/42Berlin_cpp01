/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:37:15 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:26:11 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nm) : name(nm), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& new_weapon) {
	weapon = &new_weapon;
}

void HumanB::attack() {
	if (weapon == NULL)
		std::cout << name << " is unarmed!" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}