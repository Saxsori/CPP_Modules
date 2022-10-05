/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:34:31 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 17:06:07 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplace.hpp"

std::string StrReplace::getNewLine()
{
	return (this->_new_line);	
}

// void	StrReplace::takeStarter(std::string line, std::string s1, std::string s2)
// {
// 	int begin = 0;
// 	int length = 0;
// 	size_t found;
// 	std::string new_line;

// 	if (line.find(s1) == 0)
// 	{
// 		found = line.find(s1);
// 		std::cout << found + s1.size() << std::endl;
// 		begin = line.find(s1) + s1.size();
// 		length = begin - found;
// 		new_line = line.substr(begin, length + 1);
// 		this->_new_line = s2;
// 		this->_new_line += new_line;
// 	}
// 	else
// 	{
// 		found = line.find(s1);
// 		new_line = line.substr(0, found);
// 		this->_new_line = new_line;
// 		this->_new_line += s2;
// 		std::cout << "first " << this->_new_line << std::endl;
// 	}
// 	std::cout << "first " << this->_new_line << std::endl;
// }

// 	std::string line;
// 	line = "ppboolalaboobooboolllbooboommboonboobooboonnboo";
// // 	// line = "hh";
// 	std::string new_line;
// 	std::string str = "boo";
	// char str1[] = "boo";
std::string StrReplace::replaceString(std::string line, std::string s1, std::string s2)
{
	std::string SubStr;
	char *str1 = strcpy(str1, s1.c_str());
	int	begin;
	size_t	pos;

	begin = 0;
	int length = 0;
	// ? find the first s1 
	if (line.find(s1) == 0)
	{
		pos = line.find(s1);
		std::cout << pos + s1.size() << std::endl;
		begin = line.find(s1) + s1.size();
		length = begin - pos;
		SubStr = line.substr(begin, length + 1);
		this->_new_line = s2;
		this->_new_line += SubStr;
		std::cout << BRED << this->_new_line << DEFCOLO << std::endl;
		std::cout << SubStr << std::endl;
	}
	else
	{
		pos = line.find(s1);
		SubStr = line.substr(0, pos);
		this->_new_line = SubStr;
		this->_new_line += s2;
		std::cout << BRED << this->_new_line << DEFCOLO << std::endl;
		std::cout << SubStr << std::endl;
	}
	int i = 0;
	int first = line.find(s1);
	pos = line.find(s1);
	if (pos != std::string::npos)
	{
		while (pos < line.size())
		{
			// ? getting the pos of s1
			pos = line.find(str1, pos + 1);
			begin = pos + s1.size();
	
			// ?to skip the repeated str
			if (pos == std::string::npos || pos == first)
			{
				// std::cout << BRED << this->_new_line << DEFCOLO << std::endl;
				// std::cout << "thats it !" << std::endl; 
				break;
			}

			// ? to get the replacement string each time
			while (1)
			{
				this->_new_line += s2;
				if (line.find(str1, pos + 1) == begin)
				{
					pos = line.find(str1, pos + 1);
					begin = pos + s1.size();
				}
				else
					break ;
			}
			// std::cout << "pos " << pos << std::endl;
			// ? to get the length of the substr to cpy from line
			if (line.find(str1, begin + 1) != std::string::npos)
				length = line.find(str1, begin + 1) - begin;
			else
				length = line.size() - begin;
			if (length == 0)
				break;
			
			// std::cout << "where str found " << pos << " next line " << begin << /*" " << line.find(str1, begin + 1) - begin <<*/ std::endl;
			// std::cout << "length " << length << " " << line.substr(begin, length) << std::endl;
			// ? take the subStr
			this->_new_line += line.substr(begin, length);
			// std::cout << BRED << this->_new_line << DEFCOLO << std::endl;
		}
	}
	return (this->_new_line);
}

StrReplace::StrReplace(){}

StrReplace::~StrReplace(){}