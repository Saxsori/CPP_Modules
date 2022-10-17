/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:57:40 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 15:44:32 by aaljaber         ###   ########.fr       */
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
	public:
		Intern();
		Intern(const Intern &obj);
		Intern &operator = (Intern const &obj);
		~Intern();
		Form *makeForm(std::string FormName, std::string target);

};





#endif