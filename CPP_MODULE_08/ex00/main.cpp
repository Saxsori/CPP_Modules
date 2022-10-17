/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:24:37 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/16 19:08:23 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <list>
#include <set>
#include <stack>

class NotFound : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("This container doesn't contain this element");
		}
};


template <typename T> 
typename T::iterator	easyfind (T &conatiner, int something)
{
	typename T::iterator found;
	found = std::find (conatiner.begin(), conatiner.end(), something);
	if (found != conatiner.end())
		return (std::find (conatiner.begin(), conatiner.end(), something));
	else
		throw (NotFound());
}

int main ()
{
	int mychars[] = {'a','b','c','A','B','C'};
	std::vector<char> haystack (mychars,mychars+6);
	std::vector<char>::iterator found;
	int m = 'A';
	found = std::find (haystack.begin(), haystack.end(), m);
	std::cout << "Element found in myvector: " << *found << '\n';
	
	for (std::vector<char>::iterator it = found; it!=haystack.end(); ++it)
    	std::cout << ' ' << *it << std::endl;
	
	for (std::vector<char>::iterator it = easyfind(haystack, m); it!=haystack.end(); ++it)
    	std::cout << ' ' << *it << std::endl;	
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
	

	std::cout << "blabla" << std::endl;
	
	
	std::list<char> lisst (mychars,mychars+6);
	std::list<char>::iterator blala;
	blala = std::find (lisst.begin(), lisst.end(), m);
	std::cout << "Element found in mylist: " << *found << '\n';
	
	for (std::list<char>::iterator it = blala; it!=lisst.end(); ++it)
    	std::cout << ' ' << *it << std::endl;
	
	for (std::list<char>::iterator it = easyfind(lisst, m); it!=lisst.end(); ++it)
    	std::cout << ' ' << *it << std::endl;	
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


	
	std::cout << "blabla" << std::endl;
	
	std::set<char> sett (mychars,mychars+6);
	std::set<char>::iterator setfound;
	setfound = std::find (sett.begin(), sett.end(), m);
	std::cout << "Element found in myset: " << *setfound << '\n';
	
	for (std::set<char>::iterator it = setfound; it!=sett.end(); ++it)
    	std::cout << ' ' << *it << std::endl;
	
	for (std::set<char>::iterator it = easyfind(sett, m); it!=sett.end(); ++it)
    	std::cout << ' ' << *it << std::endl;	
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
	std::cout << "blabla" << std::endl;
	
}