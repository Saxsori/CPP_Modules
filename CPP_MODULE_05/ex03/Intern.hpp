/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:57:40 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 09:19:55 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <exception>
# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define DEFCOLO "\033[0m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define BPUR "\e[0;35m"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define FORM_FUNC_NAME (std::string[]){"shrubbery creation", "robotomy request", "presidential pardon"}
#define FORM_NUM 3

class Intern
{
	private:
		/* data */
	public:
		Intern();
		~Intern();
		Form *makeForm(std::string FormName, std::string target);
		class FormNotExist : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (BRED"Form Doesn't Exist");
				}
		};
		
};


Intern::Intern(){}

Intern::~Intern(){}

Form	*newShrubberyCreation(std::string target)
{
	Form *SC = new ShrubberyCreationForm(target);
	return (SC);
}

Form	*newRobotomyRequest(std::string target)
{
	Form *RR = new RobotomyRequestForm(target);
	return (RR);
}

Form	*newPresidentialPardon(std::string target)
{
	Form *PP = new PresidentialPardonForm(target);
	return (PP);
}

Form *Intern::makeForm(std::string FormName, std::string target)
{
	Form *(*FORM_FUNC_ARRAY[5]) (std::string target) = {&newShrubberyCreation, &newRobotomyRequest, &newPresidentialPardon};
	Form *newForm;
	for (int i = 0; i < FORM_NUM; i++)
	{
		if (FormName == FORM_FUNC_NAME[i])
		{
			newForm = FORM_FUNC_ARRAY[i](target);
			std::cout << BCYN << "Intern creates " << FormName << std::endl;
			return (newForm);
		}
	}
	throw (Intern::FormNotExist());
}



#endif