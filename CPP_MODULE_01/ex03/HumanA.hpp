/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:54:12 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/06 01:27:51 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include	"Weapon.hpp"

class HumanA
{
	private:
		Weapon	&_weapon;
		std:: string _name;
	public:
		HumanA(std::string name, Weapon &WeaPon);
		~HumanA();
		void attack();
};

#endif