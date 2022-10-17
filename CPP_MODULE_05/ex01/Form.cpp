/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:36:39 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 01:41:37 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int gradeEx, const int gradeSI):_name(name), _gradeEX(gradeEx), _gradeSI(gradeSI), _isSigned(false)
{
	if (this->_gradeEX < 1 || this->_gradeSI < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeEX > 150 || this->_gradeSI > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &obj):_name(obj._name), _gradeEX(obj._gradeEX), _gradeSI(obj._gradeSI), _isSigned(obj._isSigned)
{
	*this = obj;
}

Form &Form::operator = (Form const &obj)
{
	this->_isSigned = obj._isSigned;
	const_cast<std::string&>(this->_name) = obj._name;
	const_cast<int&>(this->_gradeEX) = obj._gradeEX;
	const_cast<int&>(this->_gradeSI) = obj._gradeSI;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return (BCYN"The Grade is too High !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (BRED"The Grade is too Low !");
}

bool	Form::getSign()
{
	return (this->_isSigned);
}

const std::string	Form::getName()
{
	return (this->_name);
}

int Form::getGradeEX()const
{
	return(this->_gradeEX);
}

int Form::getGradeSI()const
{
	return(this->_gradeSI);
}

void	Form::beSigned(Bureaucrat &BUR)
{
	if (BUR.getGrade() <= this->getGradeSI())
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator << (std::ostream &COUT, Form &obj)
{
	COUT << BYEL << "Form Name: " << obj.getName() << ", Grade to Sign: " << obj.getGradeSI() << ", Grade to Execute: " << obj.getGradeEX() << ", Sign Status: " << obj.getSign() << DEFCOLO << std::endl;
	return (COUT);
}

Form::~Form(){}
