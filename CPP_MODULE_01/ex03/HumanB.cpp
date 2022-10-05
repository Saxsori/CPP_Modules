/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:02:19 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 00:00:27 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->_name << "attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else
		std::cout << "something" << std::endl;
}

/*
! similar to 
?	jim.setWeapon(&club2);
?	void	HumanB::setWeapon(Weapon *type) 
?	{
?		this->_weapon = type;
?	}
*/
void	HumanB::setWeapon(Weapon &type) 
{
	this->_weapon = &type;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}

HumanB::~HumanB(){}