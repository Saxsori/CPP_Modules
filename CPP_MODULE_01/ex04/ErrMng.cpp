/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrMng.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:36:13 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 00:42:42 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ErrMng.hpp"

int ErrMng::ArgNumCheck(int ac)
{
	if (ac < 4)
		std::cout << BRED << "Add more arguments" << DEFCOLO << std::endl;
	else if (ac > 4)
		std::cout << BRED << "Add less arguments" << DEFCOLO << std::endl;
	else
		return(1);
	return(0);
}

int ErrMng::isArg(std::string file, std::string s1, std::string s2)
{
	if (s1 == "" || s2 == "" || file == "")
	{
		std::cout << BRED << "You Shouldn't add a NULL argument -_-" << DEFCOLO << std::endl;
		return(0);
	}
	return(1);
}

std::string ErrMng::fileName(std::string name)
{
	return(name + ".replace");	
}

// int	ErrMng::isFile(std::ifstream read)
// {
// 	if (read.is_open())
// 		return(1);
// 	else
// 		std::cout << BRED << "file doesn't exist" << DEFCOLO << std::endl;
// 	return (0);
// }

ErrMng::ErrMng(){}

ErrMng::~ErrMng(){}