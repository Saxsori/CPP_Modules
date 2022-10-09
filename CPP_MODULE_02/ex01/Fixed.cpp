/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:20:03 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 16:51:29 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << BBLU << "Default constructor called" << DEFCOLO << std::endl;
	this->_num = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << BYEL << "Int constructor called" << DEFCOLO << std::endl;
	this->_num = num * (1 << this->_FractionalBits);	
}

/*
? Convert from floating-point to fixed-point
* x = floating_input * 2^(fractional_bits)
* Round x to the nearest whole number (round(x))
* Store x in an integer 
*/
Fixed::Fixed(const float dec)
{
	std::cout << BCYN << "Float constructor called" << DEFCOLO << std::endl;
	this->_num = (int)round(dec * (1 << this->_FractionalBits));	
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
Fixed::Fixed(const Fixed &obj)
{
	std::cout << BMAG << "Copy constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Fixed &Fixed::operator = (Fixed const &obj)
{
	std::cout << BGRN << "Copy assignment operator called" << DEFCOLO << std::endl;
	this->_num = obj.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

int		Fixed::getRawBits() const
{
	return (this->_num);
}

float Fixed::toFloat(void) const
{
    return ((float)this->getRawBits() / (float)(1 << this->_FractionalBits));
}

int Fixed::toInt(void) const
{
    return ((int)this->getRawBits() / (int)(1 << this->_FractionalBits));
}

Fixed::~Fixed(void)
{
	std::cout << BPUR << "Destructor called" << DEFCOLO << std::endl;
}

std::ostream & operator << (std::ostream &COUT, const Fixed &fixed)
{
    COUT << fixed.toFloat();
    return (COUT);
}