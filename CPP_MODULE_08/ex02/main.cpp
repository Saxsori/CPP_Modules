/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:18:40 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 09:18:48 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << std::endl << "*** MUTANTSTACK TEST ***" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "iterate :" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl << "*** LIST TEST ***" << std::endl;
	std::list <int> lala;
	lala.push_back(5);
	lala.push_back(17);
	std::cout << *lala.begin() << std::endl;
	lala.pop_front();
	std::cout << lala.size() << std::endl;
	lala.push_back(3);
	lala.push_back(5);
	lala.push_back(737);
	//[...]
	lala.push_back(0);
	std::list<int>::iterator it1 = lala.begin();
	std::list<int>::iterator it2 = lala.end();
	++it1;
	--it1;
	std::cout << "iterate :" << std::endl;
	while (it1 != it2)
	{
	std::cout << *it1 << std::endl;
	++it1;
	}
	// std::stack<int> s(mstack);
	return 0;
}