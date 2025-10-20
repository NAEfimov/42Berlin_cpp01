/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FReplace.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:12:55 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/20 16:15:58 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREPLACE_HPP
# define FREPLACE_HPP

#include <string>

class FReplace {
  public:
	FReplace(const std::string in_file, const std::string replace_every,
			 const std::string replace_with);
	~FReplace(void);
	bool makeReplacement(void);

  private:
	FReplace(void);
	std::string replaceInLine(const std::string line);
	
	const std::string	in_file_;
	const std::string	out_file_;
	const std::string	replace_every_;
	const std::string	replace_with_;
};

#endif //FREPLACE_HPP