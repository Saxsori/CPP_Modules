/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:20:10 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 01:12:43 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_Name(name), _HitPoint(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << BMAG << "ClapTrap Constructor called" << DEFCOLO << std::endl;
}

ClapTrap::ClapTrap():_Name(""), _HitPoint(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << BPUR << "Default Constructor called" << DEFCOLO << std::endl;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
ClapTrap &ClapTrap::operator = (ClapTrap const &obj)
{
	this->_Name = obj._Name;
	this->_AttackDamage = obj._AttackDamage;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_HitPoint = obj._HitPoint;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << std::endl << BGRN << "Energy Points: " << BRED << this->_EnergyPoints << BGRN << " Hit Points: " << BRED << this->_HitPoint << DEFCOLO << std::endl << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoint > 0)
	{
		this->_EnergyPoints--;
		std::cout << BRED  << this->_Name << " is Attacking " << target << " !" << DEFCOLO << std::endl;
	}
	else
		std::cout << BBLK << this->_Name << " can't attack " << target << ". He is already 💀 !" << DEFCOLO << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoint > 0)
	{
		this->_HitPoint -= amount;
		std::cout << BCYN << this->_Name << " take damge " << ", and it has " << this->_HitPoint << " Hit Points left!" << DEFCOLO << std::endl;
	}
	else
		std::cout << BBLK << this->_Name << " can't take damge. He is already 💀 !" << DEFCOLO << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0 && this->_HitPoint > 0)
	{
		this->_EnergyPoints--;
		this->_HitPoint += amount;
		std::cout << BYEL << this->_Name << " got repaired " << ", and it has " << this->_EnergyPoints << " Hit Points now!" << DEFCOLO << std::endl;
	}
	else
		std::cout << BBLK << this->_Name << " can't get repaired " << ". He is 💀" << DEFCOLO << std::endl;
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << BMAG << "Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << BBLU << "Destructor called" << DEFCOLO << std::endl;
}
