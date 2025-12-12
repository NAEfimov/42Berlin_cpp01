/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:25:01 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 14:30:40 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include "FReplace.hpp"

static bool checkArgsNum(int argc);

int	main(int argc, char* argv[]) {	
	if (checkArgsNum(argc))
		return (1);
	
	std::string in_file(argv[1]);
	std::string replace_every(argv[2]);
	std::string replace_with(argv[3]);
		
	FReplace replacement(in_file, replace_every, replace_with);
		
	return (replacement.makeReplacement());
}

static bool checkArgsNum(int argc) {
	if (argc != 4) {
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "./sed_is_for_losers <file> <text_to_replace> "
				  << "<replace_with>" << std::endl;
		return (true);
	}
	return (false);
}