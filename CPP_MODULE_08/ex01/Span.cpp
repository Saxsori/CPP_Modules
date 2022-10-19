/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 06:07:30 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 09:05:57 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


span::span(span &obj)
{
	*this = obj;
}

span	&span::operator = (span &obj)
{
	this->_size = obj._size;
	this->_vec = obj._vec;
	return (*this);
}

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

// template <typename T> 
// void span::addnumber(T &container)
// {
// 	// for (typename T::iterator it = container.begin(); it != container.end(); ++it)
// 	// 	this->addnumber(*it);
// 	std::copy (container.begin(), container.end(), std::back_inserter(this->_vec));
// }

int	span::shortestSpan()
{
	if (this->_vec.empty() || this->_size < 2)
		throw (span::InvalidSpan());
	else
	{
		std::sort(this->_vec.begin(), this->_vec.end());
		// for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
		// 	std::cout << *it << std::endl;
		// std::cout << "second " << *(this->_vec.begin() + 1) << std::endl;
		// std::cout << "first " << *this->_vec.begin() << std::endl;
		// std::cout << "-> " << (*(this->_vec.begin() + 1)) - (*(this->_vec.begin())) << std::endl;
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
		// std::cout << "last " << *(this->_vec.end() - 1) << std::endl;
		// std::cout << "first " << *this->_vec.begin() << std::endl;
		// std::cout << "-> " << (*(this->_vec.end() - 1)) - (*(this->_vec.begin())) << std::endl;
		return ((*(this->_vec.end() - 1)) - (*(this->_vec.begin())));
	}
}