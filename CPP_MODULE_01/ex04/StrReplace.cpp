/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:34:31 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 00:53:49 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplace.hpp"

std::string StrReplace::replaceString()
{
	
	std::string line;
	line = "ppboolalabooboolllbooboommboonboonn";
// 	// line = "hh";
	std::string new_line;
	std::string str = "boo";
	char str1[] = "boo";
	int	begin;
	size_t	end;
	begin = 0;
	int length = 0;
	if (line.find(str) == 0)
	{
		end = line.find(str);
		std::cout << end + str.size() << std::endl;
		begin = line.find(str) + str.size();
		length = begin - end;
		new_line = line.substr(begin, length + 1);
		std::cout << new_line << std::endl;
	}
	else
	{
		end = line.find(str);
		new_line = line.substr(0, end);
		std::cout << new_line << std::endl;
	}
	int i = 0;
	int first = line.find(str);
	end = line.find(str);
	if (end != std::string::npos)
	{
		while (end < line.size())
		{
			end = line.find(str1, end + 1);
			begin = end + str.size();
			// to skip the repeated str
			if (line.find(str1, end + 1) == begin)
			{
				end = line.find(str1, end + 1);
				begin = end + str.size();
			}
			std::cout << "end " << end << std::endl;
			// if there is no extra str
			if (end == std::string::npos || end == first)
			{
				std::cout << "thats it !" << std::endl; 
				break;
			}
			// to get the length of the substr to cpy from line
			if (line.find(str1, begin + 1) != std::string::npos)
				length = line.find(str1, begin + 1) - begin;
			else
				length = line.size() - begin;
			std::cout << "where str found " << end << " next line " << begin << /*" " << line.find(str1, begin + 1) - begin <<*/ std::endl;
			std::cout << "length " << length << " " << line.substr(begin, length) << std::endl;
		}
	}
	return ("");
}

StrReplace::StrReplace(){}

StrReplace::~StrReplace(){}