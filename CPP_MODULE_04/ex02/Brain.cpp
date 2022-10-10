/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:47:23 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 01:51:27 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BBLU << "Brain Default Constructor called" << DEFCOLO << std::endl;
}

/*
? Copy constructor
* A new object is created from an existing object (as a copy of the existing objec)
*/
Brain::Brain(const Brain &obj)
{
	std::cout << BMAG << "Brain Copy Constructor called" << DEFCOLO << std::endl;
	*this = obj;
}

/*
? copy Assignment operator (operator overload)
* An already initialized object is assigned to a new value from another existing object 
*/
Brain &Brain::operator = (Brain const &obj)
{
	int i = -1;
	while (++i < 100)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << BBLU << "Brain Destructor called" << DEFCOLO << std::endl;
}