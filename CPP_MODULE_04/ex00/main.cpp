/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 05:32:15 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/10 17:37:48 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main ()
{
	const Animal* animal = new Animal();
	std::cout << animal->getType() << " " << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;


	
	const Animal* cat = new Cat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	delete cat;
	std::cout << std::endl;

	
	const Animal* dog = new Dog();
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;

	
	std::cout << BBLK << std::endl << " **** WRONG CLASSES **** " << DEFCOLO << std::endl;

	const	WrongAnimal *Worngcat = new WorngCat();
	std::cout << Worngcat->getType() << " " << std::endl;
	Worngcat->makeSound(); //will output the cat sound!
	delete Worngcat;
	std::cout << std::endl;
	
	const	WrongAnimal *Wornganimal = new WrongAnimal();
	std::cout << Wornganimal->getType() << " " << std::endl;
	Wornganimal->makeSound(); //will output the cat sound!
	delete Wornganimal;
	std::cout << std::endl;
	
	return 0;
}