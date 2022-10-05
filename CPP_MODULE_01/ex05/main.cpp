/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:45:51 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/04 23:25:22 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
	Harl	harl;

	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("DebuG");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("WARNING!");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("");
	std::cout << std::endl;
}