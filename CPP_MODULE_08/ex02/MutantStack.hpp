/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:19:28 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 05:48:53 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

/*
! Implementing the Standard iterators
stack is a container adapters -> they are a special type of container class
-> they are not a full container class
-> they express the essential features of the underlying container type
they limit the user interface ..
* Container Adapters take an existing STL container and provide a restricted interface to make them behave differently *
underlying containers are the base of the container adapters and they are mostly the first classes of the STL conatiners in c++ such as (vector, list, deque)
stack underlying container is deque
-> it's a derived class inherited from deque
the c is the underlying container -> container_type and it's defined in stack class
Here we can make minor extensions to the interface of the adapter
and give them the access to the underlying container
the way to do that is to use
typename std::stack<T>::container_type
and from there u can access the iterator class
typename std::stack<T>::container_type::iterator
*/
template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		/* data */
	public:
		MutantStack(/* args */){};
		MutantStack(const MutantStack &sstack)
		{
			*this = sstack;
		}
		MutantStack &operator=(const MutantStack<T> &sstack)
		{
			std::stack<T>::operator = (sstack);
			return (*this);
		}
		~MutantStack(){};
		typedef typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		
		iterator	begin(void) {return(this->c.begin());}
		iterator	end(void) {return(this->c.end());}
};
