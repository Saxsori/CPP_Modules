/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:24:05 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 07:08:50 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
	std::cout << std::endl << BBLK << " *** BASIC ADD NUMBERS TEST *** " << DEFCOLO << std::endl;
	span bla (3);

	bla.addnumber(7);
	bla.addnumber(4);
	bla.addnumber(2);

	std::cout << BCYN << "SHORT SPAN " << bla.shortestSpan() << std::endl;
	std::cout << BCYN << "LONG SPAN " << bla.longestSpan() << std::endl;
	
	std::cout << std::endl << BBLK << " *** (vector)CONTAINER TO ADD NUMBERS IN ONE CALL FUNCTION TEST *** " << DEFCOLO << std::endl;
	
	std::vector <int> n;
	n.push_back(7);
	n.push_back(4);
	n.push_back(2);
	
	span lol (3);
	lol.addnumber(n);
	std::cout << BCYN << "SHORT SPAN " << lol.shortestSpan() << std::endl;
	std::cout << BCYN << "LONG SPAN " << lol.longestSpan() << std::endl;
	
	std::cout << std::endl << BBLK << " *** (list)CONTAINER TO ADD NUMBERS IN ONE CALL FUNCTION TEST *** " << DEFCOLO << std::endl;
	std::list <int> li;
	li.push_back(7);
	li.push_back(4);
	li.push_back(2);
	
	span lala (3);
	lala.addnumber(n);
	std::cout << BCYN << "SHORT SPAN " << lala.shortestSpan() << std::endl;
	std::cout << BCYN << "LONG SPAN " << lala.longestSpan() << std::endl;
	
	std::cout << std::endl;
	
	std::cout << std::endl << BBLK << " *** 10 000 NUMBERS TEST *** " << DEFCOLO << std::endl;
	span j (10000);
	for (int i = 0; i < 10000; i++)
		j.addnumber(rand() % 10000);
	std::cout << BCYN << "SHORT SPAN " << j.shortestSpan() << std::endl;
	std::cout << BCYN << "LONG SPAN " << j.longestSpan() << std::endl;
	std::cout << std::endl << BBLK << " *** ERROR MANGEMENT TEST *** " << DEFCOLO << std::endl;
	try
	{
		lala.addnumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		span l (3);
		l.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		span c (3);
		c.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << DEFCOLO << std::endl << std::endl;
}
