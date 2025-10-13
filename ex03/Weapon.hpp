/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:33:22 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/13 18:10:38 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
  public:
	Weapon(std::string);
	~Weapon(void);

	const std::string&	getType() const;
	void				setType(std::string);

  private:
	std::string		type;
	
	Weapon(void);
};

#endif // WEAPON_HPP
