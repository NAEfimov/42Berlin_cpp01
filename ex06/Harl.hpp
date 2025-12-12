/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:39:21 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 13:10:33 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
  public:
	Harl(void);
	void complain(std::string level);
	
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif // HARL_HPP