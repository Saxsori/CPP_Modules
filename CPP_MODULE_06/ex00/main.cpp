/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:37:58 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/15 01:25:51 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <string> 

int main (int argc, char **argv)
{
	Conversion conv;
	if (argc == 2)
	{
		conv.DoConversion(argv[1]);
		std::cout << conv;
	}
}
