/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:02:52 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:26:20 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {
  public:
	HumanB(std::string name);
	~HumanB(void);
	
	void setWeapon(Weapon& weapon);
	void attack();

  private:
  	HumanB();
	
	std::string	name;
	Weapon* weapon;
};

#endif // HUMANB_HPP