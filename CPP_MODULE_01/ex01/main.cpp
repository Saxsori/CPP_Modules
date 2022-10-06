/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:21:59 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/06 14:49:44 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *Zombies;

	Zombies = zombieHorde(10, "Sasori");
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Zombie num." << i << std::endl;
		Zombies[i].announce();
	}
	delete [] Zombies;
}
