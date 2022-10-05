/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:14:22 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 18:54:58 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "ErrMng.hpp"

std::string replaceString(std::string line, std::string s1, std::string s2)
{
	std::string newline = line;
	int	found = line.find(s1);
	std::cout << found << std::endl;
	newline.erase(found, s1.size());
	newline.insert(found, s2);
	found = line.find(s1);
	std::cout << "-->" << newline << std::endl;
	while (1)
	{
		found = line.find(s1, found + 1);
		if (found == std::string::npos)
			break ;
		found += (s2.size() - found);
		std::cout << found << std::endl;
		newline.erase(found, s1.size());
		newline.insert(found, s2);
	}
	std::cout << "-->" << newline << std::endl;
	return (newline);
}

int main (int ac, char **ag)
{
	// ErrMng		errMng;
	// std::string line;
	std::string	new_line;

	// if (errMng.ArgNumCheck(ac))
	// {
	// 	if (errMng.isArg(ag[1], ag[2], ag[3]))
	// 	{
	// 		std::ifstream read(ag[1]);
	// 		if (read.is_open())
	// 		{
	// 			std::ofstream write(errMng.fileName(ag[1]), std::ios::app);
	// 			while (read.good())
	// 			{
	// 				std::getline(read, line);
	// 				if (line.empty())
	// 					break ;
	// 				std::cout << "what is in the file --> " << BRED << line << DEFCOLO << std::endl;
					new_line = replaceString("andandh", "and", "andy");
					new_line = replaceString("booboon", "boo", "boom");
					// new_line = replaceString("booboolalaboobooboolllbooboommboonboobooboonnboo", "boo", "booC");
					// std::cout << "new line --> " << BRED << new_line << DEFCOLO << std::endl;
	// 			}
	// 			read.close();
	// 		}
	// 		else
	// 			std::cout << BRED << "file doesn't exist" << DEFCOLO << std::endl;
	// 	}	
	// }
}