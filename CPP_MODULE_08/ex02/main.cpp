/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:18:40 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/20 07:03:58 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <algorithm>
#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << std::endl << BBLK << "*** MUTANTSTACK ITERATOR TEST ***" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << BCYN << "top " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << BCYN << "size " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << BWHT << "iterate :" << std::endl;
	while (it != ite)
	{
		std::cout << BYEL << *it << std::endl;
		++it;
	}
	std::cout << std::endl << BBLK << "*** MUTANTSTACK REVERSE ITERATOR TEST ***" << std::endl;
	MutantStack<int>::reverse_iterator r1 = mstack.rbegin();
	MutantStack<int>::reverse_iterator r2 = mstack.rend();
	std::cout << BWHT << "iterate :" << std::endl;
	while (r1 != r2)
	{
		std::cout << BYEL << *r1 << std::endl;
		++r1;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl << BBLK << "*** LIST TEST ***" << std::endl;
	std::list <int> lala;
	lala.push_back(5);
	lala.push_back(17);
	std::cout << BCYN << "top " << *lala.begin() << std::endl;
	lala.pop_front();
	std::cout << BCYN << "size " << lala.size() << std::endl;
	lala.push_back(3);
	lala.push_back(5);
	lala.push_back(737);
	lala.push_back(0);
	std::list<int>::iterator it1 = lala.begin();
	std::list<int>::iterator it2 = lala.end();
	++it1;
	--it1;
	std::cout << BWHT << "iterate :" << std::endl;
	while (it1 != it2)
	{
	std::cout << BYEL << *it1 << std::endl;
	++it1;
	}
	
	std::cout << DEFCOLO;
	
	return 0;
}