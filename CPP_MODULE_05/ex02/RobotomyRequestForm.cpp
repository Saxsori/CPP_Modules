/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:01:39 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 16:38:32 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("", 45, 72), _target(""){};

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 45, 72), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj):Form(obj._target, 45, 72)
{
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &obj)
{
	this->_target = obj._target;
	return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm(){}

/*
	// form is signed 
	// grade of the bureaucrat attempting to execute the form is high enough.
	// Otherwise, throw an appropriate exception.
	
	//drilling noises
	//<target> has been robotomized successfully 50% of the time
	//Otherwise, informs that the robotomy failed
*/
void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw (RobotomyRequestForm::FornNotSigned());
	if (executor.getGrade() >= this->getGradeEX())
		throw (RobotomyRequestForm::GradeTooLowException());
	int	randChoice = rand() % 2;
	if (randChoice)
		std::cout << BGRN << this->_target << " has been robotomized successfully" << DEFCOLO << std::endl;
	else
		std::cout << BRED << this->_target << " has not been robotomized successfully" << DEFCOLO << std::endl;

}