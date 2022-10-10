/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:29:42 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 01:29:56 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("")
{
	std::cout << BBLU << "WrongAnimal Default Constructor called" << DEFCOLO << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
	std::cout << BCYN << "WrongAnimal Constructor called" << DEFCOLO << std::endl;
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