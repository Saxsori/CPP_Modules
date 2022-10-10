/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:36:25 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 01:37:11 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WorngCat::WorngCat():WrongAnimal()
{
	std::cout << BBLU << "WorngCat Default Constructor called" << DEFCOLO << std::endl;
}

WorngCat::WorngCat(std::string type)
{
	this->_type = type;
	std::cout << BCYN << "WorngCat Constructor called" << DEFCOLO << std::endl;
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
WorngCat::WorngCat(const WorngCat &obj)
{
	std::cout << BMAG << "WorngCat Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

void WorngCat::makeSound(void)const
{
	std::cout << BYEL << "*** Meow 🐱! ***"	<< DEFCOLO << std::endl;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
WorngCat &WorngCat::operator = (WorngCat const &obj)
{
	this->_type = obj._type;
	return (*this);
}

WorngCat::~WorngCat()
{
	std::cout << BBLU << "WorngCat Destructor called" << DEFCOLO << std::endl;
}
