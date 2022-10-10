/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:33:49 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 18:42:08 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("")
{
	std::cout << BCYN << "Animal Default Constructor called" << DEFCOLO << std::endl;
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
Animal::Animal(const Animal &obj)
{
	std::cout << BMAG << "Animal Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Animal &Animal::operator = (Animal const &obj)
{
	this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << BCYN << "Animal Destructor called" << DEFCOLO << std::endl;
}