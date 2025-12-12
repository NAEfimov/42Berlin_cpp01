/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:56:53 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 13:24:13 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : name("") {}

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << name << ": created" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << name << ": destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}