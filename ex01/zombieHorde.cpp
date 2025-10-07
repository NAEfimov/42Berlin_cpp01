/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:19:56 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/07 10:19:33 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstddef>

Zombie* zombieHorde(int N, std::string name) {
	void*	mem;
	Zombie*	zombie_arr;
	
	if (N <= 0) return NULL;
	
	mem = ::operator new(sizeof(Zombie) * N);
	zombie_arr = static_cast<Zombie*>(mem);
	for (int i = 0; i < N; ++i) {
		new (&zombie_arr[i]) Zombie(name);
	}
	
	return (zombie_arr);
}

void	destroyZombieHorde(Zombie* zombie_arr, int N) {
	if (N <= 0 || zombie_arr == NULL) return ;
	
	for (int i = 0; i < N; ++i) {
		zombie_arr[i].~Zombie();
	}
	::operator delete(zombie_arr);
}