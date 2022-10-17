/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:17:17 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/16 16:20:07 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<int> array(3);
	for (int i = 0; i < array.size(); i++)
		array[i] = i;
	std::cout << array;
	
	Array<int> array1 (array);
	std::cout << array1;
	Array<int> array3;
	array3 = array;
	std::cout << array3;
	
	
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
	std::cout << str;
	
	try
	{
		Array<int> arraym (0);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<float> fl(3);
	fl[0] = 0.1;
	fl[1] = 0.12;
	fl[2] = 4.31;
	std::cout << fl;
	
	return (0);
}