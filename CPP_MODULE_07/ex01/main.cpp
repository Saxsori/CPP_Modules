/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 06:55:10 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/19 02:44:09 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

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