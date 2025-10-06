/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:56:53 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/06 16:48:26 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
	this->name = name;	
}

Zombie::~Zombie(void) {
	// std::cout << name << ": destroyed" << std::endl;
	std::cout << name << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}