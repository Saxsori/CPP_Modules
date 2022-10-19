/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:21:51 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 02:58:57 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>
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

template <typename T>
class Array
{
	private:
		int	_size;
	public:
		T *_array;
		Array()
		{
			this->_array = NULL;
			this->_size = 0;
		}
		class WrongSize : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return (BRED"Invalid Size");
				}
		};
		Array(unsigned int n)
		{
			if (n > 0)
			{
				this->_array = new T[n];
				this->_size = n;
			}
			else
				throw (Array::WrongSize());
		}
		Array &operator = (Array const &obj)
		{
			if (obj._array)
			{
				if (this->_size > 0)
					delete [] this->_array;
				this->_size = obj._size;
				this->_array = new T[this->_size];
				for (int i = 0; i < this->_size; i++)
					this->_array[i] = obj._array[i];
			}
			else
			{
				if (this->_array)
					delete [] this->_array;
				this->_size = obj._size;
				this->_array = NULL;
			}
			return (*this);
		}
		Array(Array &obj)
		{
			*this = obj;
		}
		class OutOfBound : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return (BRED"Array index Out Of Bound");
				}
		};
		T& operator[](int index)
		{
			if (index >= this->_size || index < 0)
				throw (Array::OutOfBound());
			return (this->_array[index]);
		}
		int	size(void) const
		{
			return (this->_size);
		}
		~Array()
		{
			if (this->_array)
				delete [] this->_array;	
		}
};

template <class T>
std::ostream & operator << (std::ostream &COUT, const Array<T> &array)
{
	for (int i = 0; i < array.size(); i++)
		COUT << BCYN << array._array[i] << std::endl;
	return (COUT);
}



#endif