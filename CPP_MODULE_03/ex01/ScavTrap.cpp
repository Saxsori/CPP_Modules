/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:17:34 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 20:34:35 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
	std::cout << BMAG << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << std::endl << BGRN << "Energy Points: " << BRED << this->_EnergyPoints << BGRN << " Hit Points: " << BRED << this->_HitPoint << DEFCOLO << std::endl << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoint > 0)
	{
		this->_EnergyPoints--;
		std::cout << BRED << this->_Name << " attacks " << target << "!" << DEFCOLO << std::endl;
	}
	else
		std::cout << BBLK << this->_Name << " can't attack " << target << ". He is already dead !" << DEFCOLO << std::endl;

}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
ScavTrap &ScavTrap::operator = (ScavTrap const &obj)
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
ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << BMAG << "ScavTrap Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << BBLU << "ScavTrap Constructor called" << DEFCOLO << std::endl;
	this->_HitPoint = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap()
{
	std::cout << BPUR << "ScavTrap default Constructor called" << DEFCOLO << std::endl;
	this->_HitPoint = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_Name = "";
}

ScavTrap::~ScavTrap()
{
	std::cout << BMAG << "ScavTrap Destructor called" << DEFCOLO << std::endl;
}