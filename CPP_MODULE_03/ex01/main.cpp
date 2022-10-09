/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:20:16 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 19:27:43 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap admiral ("Akainu");
	ScavTrap Hiken ("Ace");
	
	Hiken.attack("Akainu");
	std::cout << BWHT << "Hiken !🔥" << DEFCOLO << std::endl;
	admiral.beRepaired(10);
	admiral.takeDamage(30);
	admiral.attack("Ace");
	std::cout << BWHT << "Inugami Guren 🌋! " << DEFCOLO << std::endl << std::endl;
	Hiken.beRepaired(10);
	Hiken.takeDamage(70);
	Hiken.attack("Akainu");
	std::cout << BWHT << "Hiken !🔥" << DEFCOLO << std::endl << std::endl;
	admiral.beRepaired(30);
	admiral.takeDamage(40);
	admiral.attack("Ace");
	std::cout << BWHT << "Inugami Guren !🌋" << DEFCOLO << std::endl << std::endl;
	Hiken.beRepaired(30);
	Hiken.guardGate();
	Hiken.takeDamage(80);
	Hiken.attack("Akainu");
}