/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:20:03 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 21:16:06 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << BYEL << "Default constructor called" << DEFCOLO << std::endl;
	this->_num = 0;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Fixed &Fixed::operator = (Fixed const &obj)
{
	std::cout << BCYN << "Copy assignment operator called" << DEFCOLO << std::endl;
	this->_num = obj.getRawBits();
	return (*this);
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
	this->_num = obj.getRawBits();
*/
Fixed::Fixed(const Fixed &obj)
{
	std::cout << BMAG << "Copy constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

void Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

int		Fixed::getRawBits() const
{
	std::cout << BGRN << "getRawBits member function called" << DEFCOLO << std::endl;
	return (this->_num);
}

Fixed::~Fixed(void)
{
	std::cout << BPUR << "Destructor called" << DEFCOLO << std::endl;
}