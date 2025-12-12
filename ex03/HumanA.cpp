/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:13:53 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:25:50 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string nm, Weapon &wp) : name(nm), weapon(wp) {}

HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon& new_weapon) {
	this->weapon = new_weapon;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

