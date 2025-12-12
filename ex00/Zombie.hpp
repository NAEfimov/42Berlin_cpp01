/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:44:26 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 13:16:10 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
  public:
  	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	
	void	announce(void);

  private:
	
	std::string	name;
};

#endif // ZOMBIE_HPP