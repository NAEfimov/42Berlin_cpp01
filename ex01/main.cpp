/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:14:10 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/10 13:31:17 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NUM 3
#define NAMES {"Joe", "Ross", "Chandler"}
#define COUNT {3, 0, 10}

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstddef>

Zombie* zombieHorde(int N, std::string name);
void	destroyZombieHorde(Zombie* zombie_arr, int N);

int	main(void) {
	std::string		zb_names[NUM] = NAMES;
	int				zb_count[NUM] = COUNT;
	Zombie*			zombie_horde_ptr;

	std::cout << "===== zombieHorde =====" <<std::endl;
	for (int i = 0; i < NUM; ++i) {
		if (i > 0)
			std::cout << std::endl;
		
		zombie_horde_ptr = zombieHorde(zb_count[i], zb_names[i]);
		if (zombie_horde_ptr == NULL) {
			std::cout << "Error!" << std::endl;
			continue;
		}
		for (int j = 0; j < zb_count[i]; ++j)
			zombie_horde_ptr[j].announce();
			
		destroyZombieHorde(zombie_horde_ptr, zb_count[i]);
	}
}