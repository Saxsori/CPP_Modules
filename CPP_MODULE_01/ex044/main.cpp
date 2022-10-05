/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:14:22 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 20:24:50 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "ErrMng.hpp"

std::string replaceString(std::string line, std::string s1, std::string s2)
{
	std::string newline = line;
	int index;
	int	found = line.find(s1);
	int first = found;
	int i = 0;
	int	diff = 0;

	if (s1.length() > s2.length())
		diff = (s1.length() - s2.length());
	else if (s1.length() < s2.length() )
		diff = (s2.length() - s1.length());
	while (1)
	{
		if (s1.length() < s2.length())
			index = found + i;
		else if (s1.length() > s2.length())
			index = found - i;
		else
			index = found;
		std::cout << "pos " << index << std::endl;
		newline.erase(index, s1.length());
		newline.insert(index, s2);
		found = line.find(s1, found + 1);
		if (found == std::string::npos || found == first)
			break ;
		i = i + diff;
	}
	std::cout << "-->" << newline << std::endl;
	return (newline);
}

					// 	// std::cout << "what is in the file --> " << BRED << line << DEFCOLO << std::endl;
					// 	// new_line = replaceString("andandh", "and", "andy");
					// 	// new_line = replaceString("booboon", "boo", "boom");
					// 	// new_line = replaceString("booboon", "boo", "boom");
					// 	// new_line = replaceString("booboolalaboobooboolllbooboommboonboobooboonnboo", "boo", "ABUUU");
int main (int ac, char **ag)
{
	ErrMng		errMng;
	std::string line;
	std::string	new_line;

	if (errMng.ArgNumCheck(ac))
	{
		if (errMng.isArg(ag[1], ag[2], ag[3]))
		{
			std::ifstream read(ag[1]);
			if (read.is_open())
			{
				if ((read.rdstate() & std::ifstream::failbit ) == 0)
				{
					std::cout << "fail " << read.failbit << " bad " << read.badbit << " good " << read.goodbit << std::endl; 
					std::ofstream write(errMng.fileName(ag[1]), std::ios::app);
					while (read.good())
					{
						std::getline(read, line);
						if (line.empty())
							break ;
						new_line = replaceString(line, ag[2], ag[3]);
						write << new_line;
						std::cout << "new line --> " << BRED << new_line << DEFCOLO << std::endl;
					}
					read.close();
				}
				else
					std::cout << BRED << "file isn't readable or empty" << DEFCOLO << std::endl;
			}
			else
				std::cout << BRED << "file doesn't exist or not readable" << DEFCOLO << std::endl;
		}	
	}
}