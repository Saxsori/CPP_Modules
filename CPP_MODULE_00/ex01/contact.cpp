/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 21:56:18 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/02 16:26:36 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::Fill__ContactFields()
{
	std::cout << std::endl;
	std::cout << BCYN << "--------------------------------------------------" << std::endl;
	this->SetFirstName();
	this->SetLastName();
	this->SetNickName();
	this->SetPhoneNumber();
	this->SetDarkestSecret();
	std::cout << BCYN << "--------------------------------------------------" << DEFCOLO << std::endl;
	std::cout << std::endl;
}

void	contact::SetFirstName()
{
	this->_first_name = "";
	while (1)
	{
		std::cout << BBLU "First Name : " << DEFCOLO;
		std::getline(std::cin, this->_first_name);
		if (this->_first_name.empty())
			std::cout << BMAG <<  "The feild is still empty" << DEFCOLO << std::endl;
		if (this->_first_name.size() != 0)
			break ;
		if (std::cin.eof())
			break ;
	}
}

void	contact::SetLastName()
{
	this->_last_name = "";
	while (1)
	{
		std::cout << BBLU << "Last Name : " << DEFCOLO;
		std::getline(std::cin, this->_last_name);
		if (this->_last_name.empty())
			std::cout << BMAG <<  "The feild is still empty" << DEFCOLO << std::endl;
		if (this->_last_name.size() != 0)
			break ;
		if (std::cin.eof())
			break ;
	}
}

void	contact::SetNickName()
{
	this->_nick_name = "";
	while (1)
	{
		std::cout << BBLU << "Nick Name : " << DEFCOLO;
		std::getline(std::cin, this->_nick_name);
		if (this->_nick_name.empty())
			std::cout << BMAG <<  "The feild is still empty" << DEFCOLO << std::endl;
		if (this->_nick_name.size() != 0)
			break ;
		if (std::cin.eof())
			break ;
	}
}

void	contact::SetPhoneNumber()
{
	this->_phone_number = "";
	while (1)
	{
		std::cout << BBLU << "Phone Number : " << DEFCOLO;
		std::getline(std::cin, this->_phone_number);
		if (this->_phone_number.empty())
			std::cout << BMAG << "The feild is still empty" << DEFCOLO << std::endl;
		if (this->_phone_number.size() != 0)
			break ;
		if (std::cin.eof())
			break ;
	}
}

void	contact::SetDarkestSecret()
{
	this->_darkest_secret = "";
	while (1)
	{
		std::cout << BBLU << "DARKEST SECERET💀 : " << DEFCOLO;
		std::getline(std::cin, this->_darkest_secret);
		if (this->_darkest_secret.empty())
			std::cout << BMAG << "The feild is still empty" << DEFCOLO << std::endl;
		if (this->_darkest_secret.size() != 0)
			break ;
		if (std::cin.eof())
			break ;
	}
}

std::string	contact::GetFirstName()
{
	return(this->_first_name);
}

std::string	contact::GetLastName()
{
	return(this->_last_name);
}

std::string	contact::GetNickName()
{
	return(this->_nick_name);
}

std::string	contact::GetPhoneNumber()
{
	return(this->_phone_number);
}

std::string	contact::GetDarkestSecret()
{
	return(this->_darkest_secret);
}

contact::contact(){}

contact::~contact(){}
