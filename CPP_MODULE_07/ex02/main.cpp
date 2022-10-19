/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:17:17 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 03:01:35 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	std::cout << std::endl << BBLK << " *** NORMAL TEST *** " << DEFCOLO << std::endl;
	Array<int> array(3);
	for (int i = 0; i < array.size(); i++)
		array[i] = i;
	std::cout << array;
	
	std::cout << std::endl << BBLK << " *** COPY CONSTRUCTOR TEST *** " << DEFCOLO << std::endl;
	Array<int> array1 (array);
	std::cout << array1;
	
	std::cout << std::endl << BBLK << " *** COPY ASSIGNMENT OPERATOR TEST *** " << DEFCOLO << std::endl;
	Array<int> array3;
	array3 = array;
	std::cout << array3;
	
	std::cout << std::endl << BBLK << " *** INITILAIZE THE ARRAY TEST *** " << DEFCOLO << std::endl;
	Array<std::string> str (3);
	for (int i = 0; i < str.size(); i++)
	{
		try
		{
			str[i] = "abrar";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << str;
	std::cout << std::endl << BBLK << " *** ACCESS VALID INDEX TEST *** " << DEFCOLO << std::endl;
	std::cout << BCYN << "str[0] = " << str[0] << std::endl;

	std::cout << std::endl << BBLK << " *** WRONG INDEX TEST *** " << DEFCOLO << std::endl;
	try
	{
		str[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		str[100];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << BBLK << " *** WRONG SIZE TEST *** " << DEFCOLO << std::endl;
	try
	{
		Array<int> arraym (0);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << BBLK << " *** ANOTHER TYPE OF ARRAY TEST *** " << DEFCOLO << std::endl;
	Array<float> fl(3);
	fl[0] = 0.1;
	fl[1] = 0.12;
	fl[2] = 4.31;
	std::cout << fl;
	std::cout << std::endl << BBLK << " *** size member function TEST *** " << DEFCOLO << std::endl;
	std::cout << fl.size() << std::endl;
	
	std::cout << DEFCOLO << std::endl;
	
	return (0);
}