/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:40:09 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:18:51 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() : type("") {}

Weapon::Weapon(std::string str) : type(str) {
	std::cout << type << " created" << std::endl;
}

Weapon::~Weapon() {
	std::cout << type << " destructed" << std::endl;
}

const std::string& Weapon::getType() const {
	const std::string& type_ref = type;
	return (type_ref);
}

void Weapon::setType(std::string const new_type) {
	type = new_type;
}
