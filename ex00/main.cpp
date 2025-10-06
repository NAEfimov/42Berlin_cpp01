/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:14:10 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/06 16:55:46 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CHUMPS {"Joe", "Ross", "Chandler"}
#define CHUMPS_NUM 3

#define ZOMBIES {"Chack", "Norris"}
#define ZOMBIES_NUM 2

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	std::string		chumps[] = CHUMPS;
	Zombie*			zombies[ZOMBIES_NUM];
	std::string		zombie_names[ZOMBIES_NUM] = ZOMBIES;
	

	std::cout << "===== randomChump =====" <<std::endl;
	for (int i = 0; i < CHUMPS_NUM; ++i) {
		randomChump(chumps[i]);
	}

	std::cout << std::endl << "===== newZombie =====" <<std::endl;
	for (int i = 0; i < ZOMBIES_NUM; ++i) {
		zombies[i] = newZombie(zombie_names[i]);
		zombies[i]->announce();
		delete zombies[i];
	}
}