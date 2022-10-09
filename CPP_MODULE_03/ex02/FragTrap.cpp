/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:53:46 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 21:03:53 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys()
{
	std::cout << BMAG << "High five Guys !" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << BMAG << "FragTrap Default Constructor called" << DEFCOLO << std::endl;
	this->_HitPoint = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_Name = "";
}


FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << BBLU << "FragTrap Constructor called" << DEFCOLO << std::endl;
	this->_HitPoint = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
FragTrap &FragTrap::operator = (FragTrap const &obj)
{
	this->_Name = obj._Name;
	this->_AttackDamage = obj._AttackDamage;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_HitPoint = obj._HitPoint;
	return (*this);
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << BMAG << "FragTrap Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}


FragTrap::~FragTrap()
{
	std::cout << BMAG << "FragTrap Destructor called" << DEFCOLO << std::endl;
}
