/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:21:08 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/02 21:35:48 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*Zombie2 = new Zombie[N];
	for (int i = 0; i < N; i++)
		Zombie2[i].SetName(name);
	return (Zombie2);
}
