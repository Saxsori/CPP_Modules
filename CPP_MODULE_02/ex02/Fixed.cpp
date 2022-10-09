/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:20:03 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 16:41:40 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_num = 0;
}

Fixed::Fixed(const int num)
{
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
	this->_num = (int)round(dec * (1 << this->_FractionalBits));	
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Fixed &Fixed::operator = (const Fixed &obj) 
{
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

Fixed::~Fixed(void){}

std::ostream & operator << (std::ostream &COUT, const Fixed &fixed)
{
    COUT << fixed.toFloat();
    return (COUT);
}

bool Fixed::operator == (Fixed const &obj) const
{
	return (this->_num == obj._num);
}

bool Fixed::operator >= (Fixed const &obj) const
{
	return (this->_num >= obj._num);
}
	
bool Fixed::operator <= (Fixed const &obj) const
{
	return (this->_num <= obj._num);
}

bool Fixed::operator != (Fixed const &obj) const
{
	return (this->_num != obj._num);
}

bool  Fixed::operator > (Fixed const &obj) const
{
	return (this->_num > obj._num);
}

bool  Fixed::operator < (Fixed const &obj) const
{
	return (this->_num < obj._num);
}

Fixed Fixed::operator + (Fixed const &obj)
{
	Fixed temp (this->toFloat() + obj.toFloat());
	return(temp);
}

Fixed Fixed::operator - (Fixed const &obj)
{
	Fixed temp (this->toFloat() - obj.toFloat());
	return(temp);
}

/*
// temp._num = (int)round((this->toFloat() * obj.toFloat()) * (1 << this->_FractionalBits));
*/
Fixed Fixed::operator * (Fixed const &obj)
{
	Fixed temp (this->toFloat() * obj.toFloat());
	return(temp);
}

Fixed Fixed::operator / (Fixed const &obj)
{
	Fixed temp (this->toFloat() / obj.toFloat());
	return(temp);
}

Fixed Fixed::operator -- ()
{
	--this->_num;
	return(*this);
}

Fixed Fixed::operator ++ ()
{
	++this->_num;
	return(*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp = *this;
	this->_num++;
	return(temp);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp = *this;
	this->_num--;
	return(temp);
}

Fixed  &Fixed::min (Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return(f1);
	return(f2);
}

Fixed  &Fixed::max (Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return(f1);
	return(f2);
}

Fixed const &Fixed::min (const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return(f1);
	return(f2);
}

Fixed const &Fixed::max (const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return(f1);
	return(f2);
}
