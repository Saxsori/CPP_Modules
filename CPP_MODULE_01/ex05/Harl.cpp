/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:45:29 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/04 23:28:18 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "You need to " << BRED << "DEBUG" << DEFCOLO << "! There is a 🕷" << std::endl;
}

void Harl::info(void)
{
	std::cout << "More" << BRED << " INFO" << DEFCOLO<< ": bla bla bla bla .. Helpful info .. bla bla bla bla it's Helpful! don't you think so ? did you know about this --> bla bla bla bla bla ! 🤓" << std::endl;
}

void Harl::warning(void)
{
	std::cout << BRED << "WARNING" << DEFCOLO << "🛑! There an issue on your system. However, it can be handled or ignored .. I guess" << std::endl;
}

void Harl::error(void)
{
	std::cout << BRED << "ERROR" << DEFCOLO << "! it's a critical issue .. unrecoverable error .. or whatever it is .. you need to fix something 🫡" << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < FUNC_NUM; i++)	
	{
		if (level == HARL_FUNC_NAME[i])
		{
			(this->*(Harl::HARL_FUNC_ARRAY[i]))();
			return ;
		}
	}
	std::cout << "heh nice try 😏" << std::endl;	
}

Harl::Harl(){}

Harl::~Harl(){}