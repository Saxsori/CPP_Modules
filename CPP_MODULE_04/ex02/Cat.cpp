/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:34:36 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 05:11:03 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat():Animal()
{
	std::cout << BBLU << "Cat Default Constructor called" << DEFCOLO << std::endl;
}

Cat::Cat(std::string type)
{
	this->_type = type;
	this->_brain = new (Brain);
	std::cout << BCYN << "Cat Constructor called" << DEFCOLO << std::endl;
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
Cat::Cat(const Cat &obj)
{
	std::cout << BMAG << "Cat Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

void Cat::makeSound(void)const
{
	std::cout << BYEL << "*** Meow 🐱! ***"	<< DEFCOLO << std::endl;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Cat &Cat::operator = (Cat const &obj)
{
	this->_type = obj._type;
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << BBLU << "Cat Destructor called" << DEFCOLO << std::endl;
}