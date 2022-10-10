/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:35:13 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 05:11:08 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog():Animal()
{
	std::cout << BBLU << "Dog Default Constructor called" << DEFCOLO << std::endl;
}

Dog::Dog(std::string type)
{
	this->_type = type;
	this->_brain = new (Brain);
	std::cout << BCYN << "Dog Constructor called" << DEFCOLO << std::endl;
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
Dog::Dog(const Dog &obj)
{
	std::cout << BMAG << "Dog Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

void Dog::makeSound(void)const
{
	std::cout << BYEL << "*** BARK 🐶! ***"	<< DEFCOLO << std::endl;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Dog &Dog::operator = (Dog const &obj)
{
	this->_type = obj._type;
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << BBLU << "Dog Destructor called" << DEFCOLO << std::endl;
}
