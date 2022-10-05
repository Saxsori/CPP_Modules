/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:45:47 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/04 15:50:48 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*
	// std::cout << "contact num " << this->_index << std::endl;
*/
void	phonebook::AddContact()
{
	this->_index++;
	if (this->_contact_num < 8)
		this->_contact_num++;
	if (this->_index == 8)
		this->_index = 0;
	this->_contact_list[this->_index].Fill__ContactFields();
}

bool phonebook::isNumeric(std::string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (std::isdigit(str[i]) == 0)
			return (false);
	}
	return (true);
}

/*
			// std::cout << num << std::endl;
*/
void	phonebook::FindContact()
{
	std::string line;

	std::cout << std::endl << "Select index" << std::endl << BBLU << "--> " << DEFCOLO;
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(0);
	if (line.empty())
		std::cout << BMAG << "Invalid index" << DEFCOLO << std::endl;
	else
	{
		if (this->isNumeric(line))
		{
			int num = stoi(line) - 1;
			// std::cout << num << std::endl;
			if (num < this->_contact_num && num > -1)
			{
				std::cout << BBLU << std::endl << this->_contact_list[num].GetFirstName() << std::endl;
				std::cout << this->_contact_list[num].GetLastName() << std::endl;
				std::cout << this->_contact_list[num].GetNickName() << std::endl;
				std::cout << this->_contact_list[num].GetPhoneNumber() << std::endl;
				std::cout << this->_contact_list[num].GetDarkestSecret() << DEFCOLO << std::endl;
				return ;
			}
		}
		std::cout << BMAG << "Invalid index" << DEFCOLO << std::endl;
	}
}

void	phonebook::SearchContact()
{
	int	i = -1;

	std::cout << std::endl;
	if (this->_contact_num > 0)
	{
		std::cout << BCYN << "--------------------------------------------------" << BPUR << std::endl;
		std::cout << BMAG << "     Index" << BCYN << "|";
		std::cout << BMAG << "First Name" << BCYN << "|";
		std::cout << BMAG << " Last Name" << BCYN << "|";
		std::cout << BMAG << " Nick Name" << BCYN << "|";
		std::cout << std::endl;
		std::cout << BCYN << "--------------------------------------------------" << DEFCOLO << std::endl;
		while (++i < this->_contact_num)
		{
			std::cout << this->GetColumn(std::to_string(i + 1));
			std::cout << this->GetColumn(this->_contact_list[i].GetFirstName());
			std::cout << this->GetColumn(this->_contact_list[i].GetLastName());
			std::cout << this->GetColumn(this->_contact_list[i].GetNickName());
			std::cout << std::endl;
		}
		this->FindContact();
	}
	else
		std::cout << BMAG << "There is no contact !" << DEFCOLO << std::endl;
	std::cout << std::endl;
}
/*
	// int i = -1;
	// while (++ i < str.size())
	// {
	// 	std::cout << i << " - " << str[i] << std::endl;  
	// }
	// std::cout << "(" << str << ")" << std::endl;
*/
std::string	phonebook::GetColumn(std::string line)
{
	std::string str;
	str.resize(11, ' ');
	str.replace((10 - line.size()), line.size(), line);
	if (line.size() > 10)
		str[9] = '.';
	str[10] = '|';
	return (str);
}

phonebook::phonebook()
{
	this->_index = -1;
	this->_contact_num = 0;
}

phonebook::~phonebook(){}
