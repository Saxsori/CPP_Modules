/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:27:14 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 20:49:42 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *Zombie1;

	Zombie1 = Zombie1->newZombie("Sasori");
	Zombie1->announce();
	delete (Zombie1);
	Zombie Zombie2;
	Zombie2.randomChump("Abrar");
}
