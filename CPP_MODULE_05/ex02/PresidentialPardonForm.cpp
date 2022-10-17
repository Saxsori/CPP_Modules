/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:24:32 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 10:01:16 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("", 5, 25), _target(""){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj):Form(obj._target, 5, 25)
{
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &obj)
{
	this->_target = obj._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 5, 25), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}


/*
	// form is signed 
	// grade of the bureaucrat attempting to execute the form is high enough.
	// Otherwise, throw an appropriate exception.
	
	//<target> has been pardoned by Zaphod Beeblebrox
*/
void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw (PresidentialPardonForm::FornNotSigned());
	if (executor.getGrade() >= this->getGradeEX())
		throw (PresidentialPardonForm::GradeTooLowException());
	std::cout << BCYN << this->_target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}