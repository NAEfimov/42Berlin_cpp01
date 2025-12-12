/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:33:22 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:18:42 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
  public:
  	Weapon();
	Weapon(std::string);
	~Weapon();

	const std::string& getType() const;
	void setType(std::string const new_type);

  private:
	std::string		type;
};

#endif // WEAPON_HPP
