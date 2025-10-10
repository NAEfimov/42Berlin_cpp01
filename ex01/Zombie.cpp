/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:56:53 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/10 13:21:41 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << name << ": created" << std::endl;
	// announce();
}

Zombie::~Zombie(void) {
	std::cout << name << ": destroyed" << std::endl;
	// std::cout << name << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}