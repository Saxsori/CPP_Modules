/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:37:58 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/18 02:38:22 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <string> 

int main (int argc, char **argv)
{
	Conversion conv;
	// std::cout << BBLK << "*** BASE CASES TEST ***" << std::endl;
	// std::cout << BCYN << "---> 0" << BYEL << std::endl;
	// std::cout << BCYN << "---> nan" << BYEL << std::endl;
	// std::cout << BCYN << "---> 42.0f" << BYEL << std::endl;
	// std::cout << BCYN << "---> mremfk" << BYEL << std::endl;
	// std::cout << BCYN << "---> A" << BYEL << std::endl;
	// std::cout << BCYN << "---> 3.4" << BYEL << std::endl;
	if (argc == 2)
	{
		conv.DoConversion(argv[1]);
		std::cout << conv;
	}
}
