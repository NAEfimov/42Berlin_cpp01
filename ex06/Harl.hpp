/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:39:21 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 12:51:44 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
  public:
	Harl(void);
	void complain(std::string const level) const;
	
  private:
	void print_debug(void) const;
	void print_info(void) const;
	void print_warning(void) const;
	void print_error(void) const;
	void print_default(void) const;
};

#endif // HARL_HPP