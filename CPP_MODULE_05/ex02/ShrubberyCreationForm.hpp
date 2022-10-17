/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:24:37 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/13 23:52:21 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
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

class ShrubberyCreationForm: public Form
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void		execute(Bureaucrat const & executor) const;
};

ShrubberyCreationForm::ShrubberyCreationForm():_target(""), Form("", 45, 72){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):_target(target), Form(target, 137, 145){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{	
	// form is signed 
	// grade of the bureaucrat attempting to execute the form is high enough.
	// Otherwise, throw an appropriate exception.
	
	// making file <target>_shrubbery
	// writes ASCII trees inside it
}


#endif