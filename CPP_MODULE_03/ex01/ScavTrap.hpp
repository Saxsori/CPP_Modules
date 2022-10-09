/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:27:44 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 20:33:34 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
	ScavTrap(const ScavTrap &obj);
	ScavTrap &operator = (ScavTrap const &obj);
	ScavTrap();
};

#endif