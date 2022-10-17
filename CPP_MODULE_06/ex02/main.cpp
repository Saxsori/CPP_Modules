/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 02:19:00 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/15 03:22:48 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>     

class Base
{
	private:
		/* data */
	public:
		Base(/* args */);
		virtual ~Base();
};
Base::Base(/* args */){}
Base::~Base(){}

class A : public Base
{
	private:
		/* data */
	public:
		A(/* args */);
		~A();
};
A::A(/* args */){}
A::~A(){}

class B : public Base
{
	private:
		/* data */
	public:
		B(/* args */);
		~B();
};
B::B(/* args */){}
B::~B(){}

class C : public Base
{
	private:
		/* data */
	public:
		C(/* args */);
		~C();
};
C::C(/* args */){}
C::~C(){}

Base * generate(void)
{
	Base *base = NULL;
	int	RandomChoice = 1 + rand() % 3;
	std::cout << RandomChoice << std::endl;
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
		dynamic_cast<A &>(p);
		std::cout << "A" <<std::endl;
	}
	catch(std::exception &e){std::cout << "wrong" <<std::endl;}
	try 
	{
		dynamic_cast<B &>(p);
		std::cout << "B" <<std::endl;
	}
	catch(std::exception &e){std::cout << "wrong" <<std::endl;}
	try 
	{
		dynamic_cast<C &>(p);
		std::cout << "C" <<std::endl;
	}
	catch(std::exception &e){std::cout << "wrong" <<std::endl;}
}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);
}