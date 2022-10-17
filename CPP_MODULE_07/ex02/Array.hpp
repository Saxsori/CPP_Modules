/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:21:51 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/16 05:41:02 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

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
					return ("Invalid Size");
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
			{
				throw (Array::WrongSize());
			}
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
					return ("Array index Out Of Bound");
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
		COUT << array._array[i] << std::endl;
	return (COUT);
}



#endif