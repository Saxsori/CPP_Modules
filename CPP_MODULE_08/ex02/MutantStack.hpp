/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:19:28 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/20 06:59:42 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
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

/*
! Implementing the Standard iterators
stack is a container adapters -> they are a special type of container class
-> they are not a full container class
-> they express the essential features of the underlying container type
-> they limit the user interface
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
		typedef typename container_type::const_iterator const_iterator;
		typedef typename container_type::reverse_iterator reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;

		
		iterator	begin(void) {return(this->c.begin());}
		iterator	end(void) {return(this->c.end());}
		
		const_iterator	begin(void) const {return(this->c.begin());}
		const_iterator	end(void)  const {return(this->c.end());}

		reverse_iterator	rbegin(void) {return(this->c.rbegin());}
		reverse_iterator	rend(void) {return(this->c.rend());}
		
		const_reverse_iterator	rbegin(void) const {return(this->c.rbegin());}
		const_reverse_iterator	rend(void) const {return(this->c.rend());}
};

#endif