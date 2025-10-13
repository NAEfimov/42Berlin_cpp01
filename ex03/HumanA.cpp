/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:13:53 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/13 18:05:53 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string nm, Weapon &wp) : name(nm), weapon(wp) {
}

HumanA::~HumanA(void) {
}

void HumanA::setWeapon(Weapon& new_weapon) {
	this->weapon = new_weapon;
}

void HumanA::attack(void) {
	// <name> attacks with their <weapon type>
	std::cout<< name << " attacks with their " << weapon.getType() << std::endl;
}

