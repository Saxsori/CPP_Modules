/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:20:03 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 21:49:21 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//! Default constructor
Fixed::Fixed(void)
{
	this->_num = 0;
}
//!



//! int and float constructor
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
//!



//! OCCF  
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
//!



//! Accessors
void Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

int		Fixed::getRawBits() const
{
	return (this->_num);
}
//!



//! converting functions
float Fixed::toFloat(void) const
{
    return ((float)this->getRawBits() / (float)(1 << this->_FractionalBits));
}

int Fixed::toInt(void) const
{
    return ((int)this->getRawBits() / (int)(1 << this->_FractionalBits));
}
//!



//! overload << insertion operator
std::ostream & operator << (std::ostream &COUT, const Fixed &fixed)
{
    COUT << fixed.toFloat();
    return (COUT);
}
//!



//! comparison operators
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
//!



//! arithmetic operators
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
cuz what will be saved on _num is fixed point result not a float it should be converted first
this can work also ->
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
//!



//! increment/decrement operators
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
//!



//! overloaded member functions
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
//!



//! Destructor
Fixed::~Fixed(void){}