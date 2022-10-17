/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:46:23 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 01:18:17 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		std::cout << std::endl << BBLK << " *** NORMAL TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 13);
		std::cout << BUR;
		Bureaucrat BUR1("SASORI", 150);
		std::cout << BUR1;
		std::cout << std::endl << BBLK << " * COPY ASSIGNMENT TEST * " << DEFCOLO << std::endl;
		Bureaucrat BUR2 = BUR1;
		std::cout << BUR2;
		std::cout << std::endl << BBLK << " * COPY CONSTRUCTOR TEST * " << DEFCOLO << std::endl;
		Bureaucrat BUR3(BUR);
		std::cout << BUR3;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << DEFCOLO << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** HIGH GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR3("ABRAR", 0);
		std::cout << BUR3;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << DEFCOLO << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** LOW GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 151);
		std::cout << BCYN << BUR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << DEFCOLO << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** DECREASE GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 149);
		std::cout << BCYN << BUR;
		BUR.decreaseGrade();
		std::cout << BCYN << BUR;
		BUR.decreaseGrade();
		std::cout << BCYN << BUR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << DEFCOLO << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** INCREASE GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 2);
		std::cout << BCYN << BUR;
		BUR.increaseGrade();
		std::cout << BCYN << BUR;
		BUR.increaseGrade();
		std::cout << BCYN << BUR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << DEFCOLO << std::endl;
	}
}