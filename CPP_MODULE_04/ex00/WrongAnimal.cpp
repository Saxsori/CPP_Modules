/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:29:42 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 17:13:28 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "BLABLA";
	std::cout << BBLU << "WrongAnimal Default Constructor called" << DEFCOLO << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << BMAG << "WrongAnimal Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

void WrongAnimal::makeSound(void)const
{
	std::cout << BYEL << "*** Wrong Animal sound ! ***"	<< DEFCOLO << std::endl;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
WrongAnimal &WrongAnimal::operator = (WrongAnimal const &obj)
{
	this->_type = obj._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BBLU << "WrongAnimal Destructor called" << DEFCOLO << std::endl;
}