/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 06:28:40 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/15 06:51:40 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &t1, T &t2)
{
	T temp = t2;
	t2 = t1;
	t1 = temp;
}
template <typename T>
T	min(T &t1, T &t2)
{
	if (t1 < t2)
		return (t1);
	return (t2);
}
template <typename T>
T	max(T &t1, T &t2)
{
	if (t1 > t2)
		return (t1);
	return (t2);
}

#endif