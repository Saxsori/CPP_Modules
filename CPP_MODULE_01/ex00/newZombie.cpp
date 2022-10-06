/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:27:29 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/06 14:47:36 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie*	Zombie::newZombie(std::string name)
// {
// 	Zombie	Zombie1[1];
// 	Zombie	*Zombie2 = Zombie1;

// 	Zombie2->SetName(name);
// 	return (Zombie2);
// }

Zombie*	newZombie(std::string name)
{
	Zombie	*Zombie2 = new (Zombie);

	Zombie2->SetName(name);
	return (Zombie2);
}