/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 21:56:18 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/01 01:04:06 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::Fill__ContactFields()
{
	std::cout << "--------------" << std::endl;
	this->SetFirstName();
	this->SetLastName();
	this->SetNickName();
	this->SetPhoneNumber();
	this->SetDarkestSecret();
}

void	contact::SetFirstName()
{
	std::cout << "First Name :";
	std::cin >> this->_first_name;
	std::cout << std::endl;
}

void	contact::SetLastName()
{
	std::cout << "Last Name :";
	std::cin >> this->_last_name;
	std::cout << std::endl;
	
}

void	contact::SetNickName()
{
	std::cout << "Nick Name :";
	std::cin >> this->_nick_name;
	std::cout << std::endl;
}

void	contact::SetPhoneNumber()
{
	std::cout << "Phone Number :";
	std::cin >> this->_phone_number;
	std::cout << std::endl;
}

void	contact::SetDarkestSecret()
{
	std::cout << "DARKEST SECRET 💀:";
	std::cin >> this->_darkest_secret;
	std::cout << std::endl;
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
