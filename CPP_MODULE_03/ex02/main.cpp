/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:20:16 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 21:04:38 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Rorono ("Zoro");
	FragTrap Mugiwara ("Luffy");
	
	Mugiwara.attack("Zoro");
	std::cout << BWHT << "Gomu Gomu no Bazooka !🚀" << DEFCOLO << std::endl;
	Rorono.beRepaired(10);
	Rorono.takeDamage(40);
	Rorono.attack("Luffy");
	std::cout << BWHT << "Oni Giri !🗡️" << DEFCOLO << std::endl << std::endl;
	Mugiwara.beRepaired(10);
	Mugiwara.takeDamage(40);
	Mugiwara.attack("Zoro");
	std::cout << BWHT << "Gomu Gomu no Pistol !🔫" << DEFCOLO << std::endl << std::endl;
	Rorono.beRepaired(10);
	Rorono.takeDamage(40);
	Rorono.attack("Luffy");
	std::cout << BWHT << "Sanzen sekai 🗡🗡🗡!" << DEFCOLO << std::endl << std::endl;
	Mugiwara.beRepaired(10);
	Mugiwara.takeDamage(40);
	Mugiwara.highFivesGuys();
	std::cout << std::endl;
}
