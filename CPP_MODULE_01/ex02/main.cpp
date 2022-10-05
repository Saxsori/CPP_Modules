/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:00:53 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 20:56:11 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The memory address of the string variable --> " << &string << std::endl;
	std::cout << "The memory address held by stringPTR --> " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF --> " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable --> " << string << std::endl;
	std::cout << "The value pointed to by stringPTR --> " << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF --> " << stringREF << std::endl;
	
	std::cout << std::endl << "Some extra manipulation with stringREF and string itself" << std::endl;
	
	std::cout << "Changing the value of stringREF" << std::endl;
	stringREF = "HI";
	std::cout << "stringREF --> " << stringREF << std::endl;
	std::cout << "string --> " << string << std::endl;
	
	std::cout << "Changing the value of string" << std::endl;
	string = "BOO";
	std::cout << "stringREF --> " << stringREF << std::endl;
	std::cout << "string --> " << string << std::endl;
}	
