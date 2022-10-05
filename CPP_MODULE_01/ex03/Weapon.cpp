/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:24:28 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/04 14:24:34 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string name)
{
	this->_type = name;
}

std::string	const & Weapon::getType() const
{
	return(this->_type);
}

Weapon::Weapon(std::string type) : _type(type){}

Weapon::Weapon() {}

Weapon::~Weapon(){}