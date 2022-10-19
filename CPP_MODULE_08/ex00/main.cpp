/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:24:37 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 08:44:39 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
	
	std::cout << BBLK << std::endl << "* VECTORS TEST *" << DEFCOLO << std::endl;
	int mychars[] = {'a','b','c','A','B','C'};
	std::vector<char> haystack (mychars,mychars+6);
	std::vector<char>::iterator found;
	int m = 'A';
	std::cout << BBLK << std::endl << "*** TEST HOW VECTOR CAN FIND AN ELEMENT ***" << DEFCOLO << std::endl;
	found = std::find (haystack.begin(), haystack.end(), m);
	std::cout << "Element found in myvector: " << *found << '\n';
	
	for (std::vector<char>::iterator it = found; it!=haystack.end(); ++it)
    	std::cout << ' ' << *it << std::endl;
		
	std::cout << BBLK << std::endl << "*** HOW MY EASY FIND IS WORKING ***" << DEFCOLO << std::endl;
	for (std::vector<char>::iterator it = easyfind(haystack, m); it!=haystack.end(); ++it)
    	std::cout << ' ' << *it << std::endl;	
	std::cout << BBLK << std::endl << "*** LOOKING FOR UNDEFINED ELEMENT ***" << DEFCOLO << std::endl;
	try
	{
		std::vector<char>::iterator it = easyfind(haystack, 'C');
		std::cout << ' ' << *it << std::endl;
		std::vector<char>::iterator it1 = easyfind(haystack, 'N');
		std::cout << ' ' << *it1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << BBLK << std::endl << "* LISTS TEST *" << DEFCOLO << std::endl;

	std::list<char> lisst (mychars,mychars+6);
	std::list<char>::iterator blala;
	std::cout << BBLK << std::endl << "*** TEST HOW LIST CAN FIND AN ELEMENT ***" << DEFCOLO << std::endl;
	blala = std::find (lisst.begin(), lisst.end(), m);
	std::cout << "Element found in mylist: " << *found << '\n';
	
	for (std::list<char>::iterator it = blala; it!=lisst.end(); ++it)
    	std::cout << ' ' << *it << std::endl;
	
	std::cout << BBLK << std::endl << "*** HOW MY EASY FIND IS WORKING ***" << DEFCOLO << std::endl;	
	for (std::list<char>::iterator it = easyfind(lisst, m); it!=lisst.end(); ++it)
    	std::cout << ' ' << *it << std::endl;	
	std::cout << BBLK << std::endl << "*** LOOKING FOR UNDEFINED ELEMENT ***" << DEFCOLO << std::endl;
	try
	{
		std::list<char>::iterator li = easyfind(lisst, 'C');
		std::cout << ' ' << *li << std::endl;
		std::list<char>::iterator li1 = easyfind(lisst, 'N');
		std::cout << ' ' << *li1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	
	std::cout << BBLK << std::endl << "* SETS TEST *" << DEFCOLO << std::endl;
	
	std::set<char> sett (mychars,mychars+6);
	std::set<char>::iterator setfound;
	std::cout << BBLK << std::endl << "*** TEST HOW SET CAN FIND AN ELEMENT ***" << DEFCOLO << std::endl;
	setfound = std::find (sett.begin(), sett.end(), m);
	std::cout << "Element found in myset: " << *setfound << '\n';
	
	for (std::set<char>::iterator it = setfound; it!=sett.end(); ++it)
    	std::cout << ' ' << *it << std::endl;
	std::cout << BBLK << std::endl << "*** HOW MY EASY FIND IS WORKING ***" << DEFCOLO << std::endl;	
	for (std::set<char>::iterator it = easyfind(sett, m); it!=sett.end(); ++it)
    	std::cout << ' ' << *it << std::endl;
	std::cout << BBLK << std::endl << "*** LOOKING FOR UNDEFINED ELEMENT ***" << DEFCOLO << std::endl;
	try
	{
		std::set<char>::iterator se = easyfind(sett, 'C');
		std::cout << ' ' << *se << std::endl;
		std::set<char>::iterator se1 = easyfind(sett, 'N');
		std::cout << ' ' << *se1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
}