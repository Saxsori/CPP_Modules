/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:33:49 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 01:33:59 by aaljaber         ###   ########.fr       */
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

void Animal::makeSound(void)const
{
	std::cout << BYEL << "*** Animal sound ***"	<< DEFCOLO << std::endl;
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
	std::cout << BBLU << "Animal Destructor called" << DEFCOLO << std::endl;
}