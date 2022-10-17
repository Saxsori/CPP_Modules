/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:24:05 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/16 23:08:52 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <exception>
#include<iterator> // for back_inserter 


class span
{
	private:
		std::vector <int>	_vec;
		unsigned int		_size;
	public:
		span();
		span(unsigned int size);
		span(span &obj);
		~span();
		
		void addnumber(int num);
		template <typename T> 
		void addnumber(T &container);
		int	shortestSpan();
		int	longestSpan();
		class InvalidSize : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Container Can't take More Integers");
				}
		};
		class InvalidSpan : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Span is Invalid: Container is empty or it has only one element");
				}
		};
};

// span::span(span &obj)
// {
	
// }

span::span(unsigned int size)
{
	this->_size = size;	
}

span::~span(){}

void span::addnumber(int num)
{
	if (this->_vec.size() < this->_size)
		this->_vec.push_back(num);
	else
		throw(span::InvalidSize());
}

template <typename T> 
void span::addnumber(T &container)
{
	// for (typename T::iterator it = container.begin(); it != container.end(); ++it)
	// 	this->addnumber(*it);
	std::copy (container.begin(), container.end(), std::back_inserter(this->_vec));
}

int	span::shortestSpan()
{
	if (this->_vec.empty() || this->_size < 2)
		throw (span::InvalidSpan());
	else
	{
		std::sort(this->_vec.begin(), this->_vec.end());
		// for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
		// 	std::cout << *it << std::endl;
		std::cout << "second " << *(this->_vec.begin() + 1) << std::endl;
		std::cout << "first " << *this->_vec.begin() << std::endl;
		std::cout << "-> " << (*(this->_vec.begin() + 1)) - (*(this->_vec.begin())) << std::endl;
		return ((*(this->_vec.begin() + 1)) - (*(this->_vec.begin())));		
	}
}

int	span::longestSpan()
{
	if (this->_vec.empty() || this->_size < 2)
		throw (span::InvalidSpan());
	else
	{
		std::sort(this->_vec.begin(), this->_vec.end());
		// for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
			// std::cout << *it << std::endl;
		std::cout << "last " << *(this->_vec.end() - 1) << std::endl;
		std::cout << "first " << *this->_vec.begin() << std::endl;
		std::cout << "-> " << (*(this->_vec.end() - 1)) - (*(this->_vec.begin())) << std::endl;
		return ((*(this->_vec.end() - 1)) - (*(this->_vec.begin())));
	}
}

int main ()
{
	std::cout << std::endl << "basic" << std::endl;
	span bla (3);

	bla.addnumber(7);
	bla.addnumber(4);
	bla.addnumber(2);

	std::cout << bla.shortestSpan() << std::endl;
	std::cout << bla.longestSpan() << std::endl;
	
	std::cout << std::endl << "vector" << std::endl;
	
	std::vector <int> n;
	n.push_back(7);
	n.push_back(4);
	n.push_back(2);
	
	span lol (3);
	lol.addnumber(n);
	std::cout << lol.shortestSpan() << std::endl;
	std::cout << lol.longestSpan() << std::endl;
	
	std::cout << std::endl << "list" << std::endl;
	std::list <int> li;
	li.push_back(7);
	li.push_back(4);
	li.push_back(2);
	
	span lala (3);
	lala.addnumber(n);
	std::cout << lala.shortestSpan() << std::endl;
	std::cout << lala.longestSpan() << std::endl;
	
	std::cout << std::endl;

	span j (10000);
	for (int i = 0; i < 10000; i++)
		j.addnumber(rand() % 10000);
	std::cout << j.shortestSpan() << std::endl;
	std::cout << j.longestSpan() << std::endl;
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
	std::cout << std::endl;
}
