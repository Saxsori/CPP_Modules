/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:16:35 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/02 18:50:23 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "phonebook.hpp"

/*
		// std::cout << "print " << option << std::endl;
		// std::cout << "ctrl d hit ? " << std::cin.eof() << std::endl;
	// // std::cin >> option;
	// 	std::getline(std::cin, option);
	// std::cout << "(" << option << ")" << std::endl;
*/
int main ()
{
	std::string option;
	phonebook phone_book;

	while (1)
	for(;;)
	{
		std::cout << BPUR << "--------------------------------------------------" << BCYN << std::endl;
		std::cout << BCYN << ">>>>>>>>>>>>>> My Awesome Phonebook <<<<<<<<<<<<<<" << BPUR << std::endl;
		std::cout << BPUR << "--------------------------------------------------" << BCYN << std::endl;
		std::cout << DEFCOLO << "You can only enter " << BBLU << "ADD SEARCH EXIT" << DEFCOLO << std::endl;
		std::cout << BBLU << "--> " << DEFCOLO;
		std::getline(std::cin, option);
		if (std::cin.eof())
			exit(0);
		if (option == "EXIT")
		{
			std::cout << BMAG << "Bye:) !" << DEFCOLO << std::endl;
			exit(0);
		}
		if (option.empty())
			std::cout << BMAG << "The feild is still empty" << DEFCOLO << std::endl;
		else if (option == "ADD")
			phone_book.AddContact();
		else if (option == "SEARCH")
			phone_book.SearchContact();
	}
}