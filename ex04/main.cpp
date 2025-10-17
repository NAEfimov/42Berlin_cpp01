/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:25:01 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/17 14:40:21 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

std::string replaceSubstring(const std::string str, const std::string source, 
															std::string target) {
	std::string	result;
	size_t		pos = 0;
	size_t 		found;

	if (source == "")
		return str;
	while ((found = str.find(source, pos)) != std::string::npos) {
		result += str.substr(pos, found - pos);
		result += target;
		pos = found + source.length();
	}
	result += str.substr(pos);
	return result;
}

int	main(int argc, char* argv[]) {
	
	// std::string out_file_name;
	
	if (argc != 4)
	return (1);
	
	std::string	in_file_name(argv[1]);
	std::ifstream in(in_file_name.c_str());
	if (!in) {
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::string	out_file_name(in_file_name + ".replace");
	std::ofstream out(out_file_name.c_str());
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
		
				
		// out << line;
		out << replaceSubstring(line, argv[2], argv[3]);
	}
	
	return (0);
}