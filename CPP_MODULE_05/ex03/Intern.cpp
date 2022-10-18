/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:24:56 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 16:34:08 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &obj){(void)obj;}

Intern &Intern::operator = (Intern const &obj)
{
	(void)obj;
	return (*this);
}

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
	std::cout << BRED << "Form Doesn't Exist" << DEFCOLO << std::endl;
	return (NULL);
}
