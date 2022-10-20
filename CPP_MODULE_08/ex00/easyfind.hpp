/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:54:16 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 12:07:21 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <list>
#include <set>
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

class NotFound : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("This container doesn't contain this element");
		}
};

/*
Assoc. containers have no notion of a sequence/indexing
An iterator is an object that can iterate over elements in a C++ Standard Library container and provide access to individual elements.
*/
template <typename T> 
typename T::iterator	easyfind (T &conatiner, int something)
{
	typename T::iterator found;
	found = std::find (conatiner.begin(), conatiner.end(), something);
	if (found != conatiner.end())
		return (std::find (conatiner.begin(), conatiner.end(), something));
	else
		throw (NotFound());
}
