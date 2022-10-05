/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:10:45 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/04 14:19:20 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() 
{
	std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &WeaPon) : _name(name), _weapon(WeaPon) {}

HumanA::~HumanA(){}