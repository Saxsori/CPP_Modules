/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 02:19:00 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/18 07:45:11 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

   
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base *base = NULL;
	int	RandomChoice = 1 + rand() % 3;
	// std::cout << RandomChoice << std::endl;
	if (RandomChoice == 1)
		base = new A();
	if (RandomChoice == 2)
		base = new B();
	if (RandomChoice == 3)
		base = new C();
	return (base);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" <<std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" <<std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" <<std::endl;
}

void identify(Base& p)
{
	try 
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" <<std::endl;
	}
	catch(std::exception &e){/*std::cout << "not A" <<std::endl;*/}
	try 
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" <<std::endl;
	}
	catch(std::exception &e){/*std::cout << "not B" <<std::endl;*/}
	try 
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" <<std::endl;
	}
	catch(std::exception &e){/*std::cout << "not C" <<std::endl;*/}
}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);
}