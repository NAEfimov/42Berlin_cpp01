/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:14:10 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/10 13:49:56 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ZB_TESTS_NUM 4
#define ZB_NAMES {"Joe", "Ross", "Chandler", "Rachel"}
#define ZB_COUNT {3, 0, 10, 1}
#define COLOR_RED	31
#define COLOR_START 35

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstddef>

Zombie* zombieHorde(int N, std::string name);
void	destroyZombieHorde(Zombie* zombie_arr, int N);

int	main(void) {
	std::string		zb_names[ZB_TESTS_NUM] = ZB_NAMES;
	int				zb_count[ZB_TESTS_NUM] = ZB_COUNT;
	Zombie*			zombie_horde_ptr;
	// int				color = 34;

	std::cout << "===== zombieHorde =====" <<std::endl;
	for (int i = 0; i < ZB_TESTS_NUM; ++i) {
		std::cout << "\033[" << COLOR_START + i % 2 << "m";
		
		if (i > 0)
			std::cout << std::endl;
		
		zombie_horde_ptr = zombieHorde(zb_count[i], zb_names[i]);
		if (zombie_horde_ptr == NULL) {
			std::cout << "\033[" << COLOR_RED << "m";
			std::cout << "Error!" << std::endl;
			std::cout << "\033[0m";
			continue;
		}
		for (int j = 0; j < zb_count[i]; ++j)
			zombie_horde_ptr[j].announce();
			
		destroyZombieHorde(zombie_horde_ptr, zb_count[i]);
		std::cout << "\033[0m";
	}
}