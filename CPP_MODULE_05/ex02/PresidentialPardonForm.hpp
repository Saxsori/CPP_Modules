/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:23:31 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 09:24:19 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

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

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm();
		PresidentialPardonForm &operator = (PresidentialPardonForm const &obj);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		void		execute(Bureaucrat const & executor) const;
};

PresidentialPardonForm::PresidentialPardonForm():Form("", 5, 25), _target(""){}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &obj)
{
	this->_target = obj._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 5, 25), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw (PresidentialPardonForm::FornNotSigned());
	if (executor.getGrade() >= this->getGradeEX())
		throw (PresidentialPardonForm::GradeTooLowException());
	std::cout << BCYN << this->_target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
	// form is signed 
	// grade of the bureaucrat attempting to execute the form is high enough.
	// Otherwise, throw an appropriate exception.
	
	//<target> has been pardoned by Zaphod Beeblebrox
}

#endif