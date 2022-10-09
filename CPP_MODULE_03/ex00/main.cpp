/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:20:16 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 18:44:57 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap Mugiwara ("Luffy");
	ClapTrap Chobikai ("Crocodile");
	
	Mugiwara.attack("Crocodile");
	std::cout << BWHT << "Gomu Gomu no Pistol !🔫 " << std::endl;
	Chobikai.beRepaired(5);
	Chobikai.takeDamage(11);
	Chobikai.attack("Luffy");
	std::cout << BWHT << "Desert la Spadaaa !🌪" << std::endl;
	Mugiwara.beRepaired(10);
	Mugiwara.takeDamage(9);
	Mugiwara.attack("Crocodile");
	std::cout << BWHT << "Gomu Gomu no Stoooorm !🤜🤜🤜" << std::endl;
	Chobikai.beRepaired(5);
	Chobikai.takeDamage(11);
	Chobikai.attack("Luffy");
}