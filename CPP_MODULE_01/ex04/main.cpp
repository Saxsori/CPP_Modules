/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:15:02 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 00:52:10 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplace.hpp"
#include "ErrMng.hpp"
#include <fstream>

// int main (int ac, char **av)
// {
	// std::string filename;
	// std::string s1;
	// std::string s2;
	// if (ac < 4)
	// 	std::cout << "Add more arguments" << std::endl;
	// else if (ac > 4)
	// 	std::cout << "Add less arguments" << std::endl;
	// else
	// {
	// 	filename = av[1];
	// 	s1 = av[2];
	// 	s2 = av[3];
	// 	if (s1 == "" || s2 == "" || s3 == "")
	// 		std::cout << BRED << "You Shouldn't add a NULL argument -_-" << DEFCOLO << std::endl;
	// 	else
	// 	{
			
	// 	}
	// }
	// std::ifstream read("file");
	// std::ofstream write ("fnile", std::ios::app);

	// if (read.is_open())
	// {
	// 	while (read.good())
	// 	{
	// 		std::getline(read, line);
	// 		std::cout << "what is in the file --> " << BCYN << line << DEFCOLO << std::endl;
	// 	}
	// 	read.close();
	// }
	// else
	// 	std::cout << BRED << "file doesn't exist" << DEFCOLO << std::endl;
	// std::cout << BCYN << "file does exist" << DEFCOLO << std::endl;
	// write << "hey";
	

// 	std::string line;
// 	line = "ppboolalabooboolllbooboommboonboon";
// // 	// line = "hh";
// 	std::string new_line;
// 	std::string str = "boo";
// 	char str1[] = "boo";
// 	int	begin;
// 	size_t	end;
// 	begin = 0;
// 	int length = 0;
// 	if (line.find(str) == 0)
// 	{
// 		end = line.find(str);
// 		std::cout << end + str.size() << std::endl;
// 		begin = line.find(str) + str.size();
// 		length = begin - end;
// 		new_line = line.substr(begin, length + 1);
// 		std::cout << new_line << std::endl;
// 	}
// 	else
// 	{
// 		end = line.find(str);
// 		new_line = line.substr(0, end);
// 		std::cout << new_line << std::endl;
// 	}
// 	int i = 0;
// 	int first = line.find(str);
// 	end = line.find(str);
// 	if (end != std::string::npos)
// 	{
// 		while (end < line.size())
// 		{
// 			end = line.find(str1, end + 1);
// 			begin = end + str.size();
// 			// to skip the repeated str
// 			if (line.find(str1, end + 1) == begin)
// 			{
// 				end = line.find(str1, end + 1);
// 				begin = end + str.size();
// 			}
// 			std::cout << "end " << end << std::endl;
// 			// if there is no extra str
// 			if (end == std::string::npos || end == first)
// 			{
// 				std::cout << "thats it !" << std::endl; 
// 				break;
// 			}
// 			// to get the length of the substr to cpy from line
// 			if (line.find(str1, begin + 1) != std::string::npos)
// 				length = line.find(str1, begin + 1) - begin;
// 			else
// 				length = line.size() - begin;
// 			std::cout << "where str found " << end << " next line " << begin << /*" " << line.find(str1, begin + 1) - begin <<*/ std::endl;
// 			std::cout << "length " << length << " " << line.substr(begin, length) << std::endl;
// 		}
// 	}
// }

int main (int ac, char **ag)
{
	StrReplace str_tool;
	ErrMng errMng;
	std::string line;

	if (errMng.ArgNumCheck(ac))
	{
		if (errMng.isArg(ag[1], ag[2], ag[3]))
		{
			std::ifstream read(ag[1]);
			if (read.is_open())
			{
				std::ofstream write(errMng.fileName(ag[1]), std::ios::app);
				while (read.good())
				{
					std::getline(read, line);
					if (line.empty())
						break ;
					std::cout << "what is in the file --> " << BRED << line << DEFCOLO << std::endl;
				}
				read.close();
			}
			else
				std::cout << BRED << "file doesn't exist" << DEFCOLO << std::endl;
		}	
	}
	
	str_tool.replaceString();
}
