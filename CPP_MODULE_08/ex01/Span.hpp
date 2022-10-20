/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 06:03:20 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 13:55:36 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <exception>
// #include<iterator>
#include <iterator> // for back_inserter 
# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define BPUR "\e[0;35m"
# define DEFCOLO "\033[0m"

class span
{
	private:
		std::vector <int>	_vec;
		unsigned int		_size;
	public:
		span();
		span(unsigned int size);
		span(span &obj);
		span	&operator = (span &obj);
		~span();
		
		void	addnumber(int num);
		void	addnumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);

		// typename T::iterator 
		// template <typename T>
		// void addnumber(typename T::iterator it1, typename T::iterator it2)
		// {
		// 	typename T::iterator begin;
		// 	for (begin = it1; begin != it2; begin++)
		// 		addnumber(*begin);
		// 	// std::copy (container.begin(), container.end(), std::back_inserter(this->_vec));
		// }

		int	shortestSpan();
		int	longestSpan();
		class InvalidSize : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (BRED "Container Can't take More Integers");
				}
		};
		class InvalidSpan : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (BRED "Span is Invalid: Container is empty or it has only one element");
				}
		};
};

#endif