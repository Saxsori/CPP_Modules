/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:10:09 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/04 23:51:32 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include	"Weapon.hpp"

class HumanB
{
	private:
		Weapon	*_weapon;
		std:: string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		void 	attack();
		void	setWeapon(Weapon &type);
};

#endif
