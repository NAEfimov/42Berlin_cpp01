/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:14:10 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/07 10:17:24 by nefimov          ###   ########.fr       */
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
	Zombie*			zombies;

	std::cout << "===== zombieHorde =====" <<std::endl;
	for (int i = 0; i < NUM; ++i) {
		zombies = zombieHorde(zb_count[i], zb_names[i]);
		destroyZombieHorde(zombies, zb_count[i]);
	}

}