/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 06:55:10 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/16 17:09:40 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int main ()
{
	int *array = new int[3];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	iter(array, 3, &func);
	double *array1 = new double[3];
	array1[0] = 1.1;
	array1[1] = 2.2;
	array1[2] = 3.3;
	iter(array1, 3, &func);
	delete [] array;
	delete [] array1;
}