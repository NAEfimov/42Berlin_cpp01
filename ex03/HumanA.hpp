/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:02:05 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:25:37 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void setWeapon(Weapon& new_weapon);
	void attack();
  
  private:
  	HumanA();
	
	std::string	name;
	Weapon& weapon;
};

#endif // HUMANA_HPP