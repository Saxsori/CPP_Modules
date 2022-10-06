/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:21:08 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/06 14:49:34 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*Zombie2 = NULL;
	if (N > 0)
	{
		Zombie2 = new Zombie[N];
		for (int i = 0; i < N; i++)
			Zombie2[i].SetName(name);
	}
	return (Zombie2);
}
