/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:02:52 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/13 16:26:38 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
  public:
	void setWeapon(Weapon& weapon);
 
 	HumanB(std::string name);
	~HumanB(void);

	void attack(void);
  private:
	std::string	name;
	Weapon*		weapon;
  
 	HumanB(void);
};

#endif // HUMANB_HPP