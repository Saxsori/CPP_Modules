/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:43:05 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 02:43:57 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void func(T &element)
{
	std::cout << element << std::endl;
}

template<typename T>
void	iter(T *array, int length, void (*func)(T &element))
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}

#endif