/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:54:16 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 05:54:58 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <list>
#include <set>
#include <stack>

class NotFound : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("This container doesn't contain this element");
		}
};


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
