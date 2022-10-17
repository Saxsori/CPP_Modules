/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:17:56 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 04:40:05 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>
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

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void		execute(Bureaucrat const & executor) const;
};

RobotomyRequestForm::RobotomyRequestForm():Form("", 45, 72), _target(""){};

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 45, 72), _target(target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

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

	// form is signed 
	// grade of the bureaucrat attempting to execute the form is high enough.
	// Otherwise, throw an appropriate exception.
	
	//drilling noises
	//<target> has been robotomized successfully 50% of the time
	//Otherwise, informs that the robotomy failed
}

#endif