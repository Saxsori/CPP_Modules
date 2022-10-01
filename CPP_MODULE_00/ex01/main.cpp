/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:16:35 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/01 00:11:11 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "phonebook.hpp"

int main ()
{
	std::string option;
	phonebook phone_book;

	while (1)
	for(;;)
	{
		std::cout << "you can only enter ADD SEARCH EXIT" << std::endl;
		std::cout << "-->";
		std::cin >> option;
		// std::cout << "print " << option << std::endl;
		if (std::cin.eof() || option == "EXIT")
		{
			std::cout << std::endl;
			break ;
		}
		else if (option == "ADD")
			phone_book.add_contact();
		else if (option == "SEARCH")
			printf("lala");
		// if (std::cin.eof())
		// 	exit(0);
		// std::cout << "ctrl d hit ? " << std::cin.eof() << std::endl;
	}
	// std::cin >> option;
	// option.resize(11);
	// option[option.size() - 1] = '.';
	// std::cout << option << std::endl;
}