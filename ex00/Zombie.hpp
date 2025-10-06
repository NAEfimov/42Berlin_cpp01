/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:44:26 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/06 16:55:37 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
  private:
	Zombie(void);
	
	std::string	name;
	
  public:
	Zombie(std::string name);
	~Zombie(void);
  
  	void	announce(void);
};

// Zombie*	newZombie(std::string name);
// void	randomChump(std::string name);

#endif // ZOMBIE_HPP