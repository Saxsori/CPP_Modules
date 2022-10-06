/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:14:22 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/06 18:42:02 by aaljaber         ###   ########.fr       */
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
	
	if (found == -1)
	{
		std::cout << s1 << " is not found" << std::endl;
		exit(1);
	}
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
		// std::cout << "pos " << index << std::endl;
		newline.erase(index, s1.length());
		newline.insert(index, s2);
		found = line.find(s1, found + (diff + 1));
		if (found == std::string::npos || found == first)
			break ;
		i = i + diff;
		// std::cout << BRED << "-->" << newline << DEFCOLO << std::endl;
	}
	return (newline);
}

/*
					// 	// std::cout << "what is in the file --> " << BRED << line << DEFCOLO << std::endl;
					// 	// new_line = replaceString("andandh", "and", "andy");
					// 	// new_line = replaceString("booboon", "boo", "boom");
					// 	// new_line = replaceString("booboon", "boo", "boom");
					// 	// new_line = replaceString("booboolalaboobooboolllbooboommboonboobooboonnboo", "boo", "ABUUU");
? booboolalaboobooboolllbooboomnmboonboobooboonnboo    boo bo
? booboolalaboobooboolllbooboomnmboonboobooboonnboo    boo booA
? booboolalaboobooboolllbooboomnmboonboobooboonnboo    boo BOO
? booboolalaboobooboolllbooboomnmboonboobooboonnboo    boo N
? bbbbbbooo    bb bbb
? bbbooo    b bb
? testsdhjg loooooolhhhh  l k
? testsdhjg loooooolhhhh  k l
*/
int main (int ac, char **ag)
{
	ErrMng		errMng;
	std::string line;
	std::string	new_line;

	if (errMng.ArgNumCheck(ac))
	{
		if (errMng.isArg(ag[1], ag[2], ag[3]))
		{
			std::fstream per(ag[1]);
			std::ifstream read(ag[1]);
			if (per.is_open() && read.is_open())
			{
				if ((per.rdstate() & std::ifstream::failbit) == 0)
				{
					std::ofstream write(errMng.fileName(ag[1]), std::ios::app);
					while (read.good())
					{
						std::getline(read, line);
						if (line.empty())
							break ;
						new_line = replaceString(line, ag[2], ag[3]);
						write << new_line << std::endl;
						// std::cout << "new line --> " << BRED << new_line << DEFCOLO << std::endl;
					}
					read.close();
					per.close();
				}
				else
					std::cout << BRED << "file isn't readable or empty" << DEFCOLO << std::endl;
			}
			else
				std::cout << BRED << "file doesn't exist or not readable" << DEFCOLO << std::endl;
		}	
	}
}