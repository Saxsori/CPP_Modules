/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 05:12:51 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 18:59:01 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	Animal *animal[10];
	
	for (int i = 0; i < 5; i++)
		animal[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animal[i] = new Dog();
	
	for (int i = 0; i < 10; i++)
		animal[i]->makeSound();

	
	for (int i = 0; i < 5; i++)
		delete animal[i];
	for (int i = 5; i < 10; i++)
		delete animal[i];
	
	std::cout << BBLK << std::endl << "**** Deep Copy test ****" << std::endl;
	Dog basic;
	Dog temp;
	temp = basic;
}