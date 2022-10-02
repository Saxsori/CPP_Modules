/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:00:53 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/02 22:06:55 by aaljaber         ###   ########.fr       */
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
	std::cout << "The memory address held by stringPTR --> " << &stringREF << std::endl;
	std::cout << "The value of the string variable --> " << string << std::endl;
	std::cout << "The value pointed to by stringPTR --> " << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF --> " << stringREF << std::endl;
}
