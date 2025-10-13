/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:02:05 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/13 15:32:33 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
  public:
	void setWeapon(Weapon& new_weapon);
  
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack(void);
  
  private:
	std::string	name;
	Weapon&		weapon;

	HumanA(void);
};

#endif // HUMANA_HPP