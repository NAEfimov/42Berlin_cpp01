/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FReplace.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:12:55 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:37:06 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREPLACE_HPP
# define FREPLACE_HPP

#include <string>

class FReplace {
  public:
	FReplace(std::string const in_file, std::string const replace_every,
			 std::string const replace_with);
	~FReplace();
	
	bool makeReplacement();

  private:
	FReplace();
	
	std::string in_file_;
	std::string out_file_;
	std::string replace_every_;
	std::string replace_with_;
	
	std::string replaceInLine(const std::string& line);
};

#endif //FREPLACE_HPP