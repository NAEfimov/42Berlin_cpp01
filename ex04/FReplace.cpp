/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FReplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:29:33 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/20 17:40:51 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FReplace.hpp"
#include <fstream>
#include <iostream>

FReplace::FReplace(const std::string in_file, const std::string replace_every,
				   const std::string replace_with) :
	in_file_(in_file), out_file_(in_file + ".replace"),
	replace_every_(replace_every), replace_with_(replace_with) {}

FReplace::~FReplace(void) {};

bool FReplace::makeReplacement(void) {
	std::ifstream in(in_file_.c_str());
	if (!in) {
		std::cout << "File not found" << std::endl;
		return (1);
	}

	std::ofstream out(out_file_.c_str());
	if (!out) {
		std::cout << "Output file error" << std::endl;
		return (1);
	}

	std::string line;
	bool		is_first = true;
	while (getline(in, line)) {
		if (is_first)
			is_first = false;
		else
			out << std::endl;
		out << replaceInLine(line);
	}

	return (0);
}

std::string FReplace::replaceInLine(const std::string& line) {
	std::string	result;
	size_t		pos = 0;
	size_t 		found;

	if (replace_every_ == "")
		return line;

	while ((found = line.find(replace_every_, pos)) != std::string::npos) {
		result += line.substr(pos, found - pos);
		result += replace_with_;
		pos = found + replace_every_.length();
	}
	result += line.substr(pos);
	
	return result;
}