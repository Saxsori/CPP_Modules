/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:35:13 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 18:25:41 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << BBLU << "Dog Default Constructor called" << DEFCOLO << std::endl;
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
	std::cout << BYEL << "*** Woof 🐶! ***"	<< DEFCOLO << std::endl;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Dog &Dog::operator = (Dog const &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		*this->_brain = *obj._brain;
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << BBLU << "Dog Destructor called" << DEFCOLO << std::endl;
}
