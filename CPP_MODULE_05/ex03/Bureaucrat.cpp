/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:35:50 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 10:14:13 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::signForm(Form &FOR)
{
	try
	{
		FOR.beSigned(*this);
		if (FOR.getSign())
			std::cout << BBLU << this->getName() << " signed " << FOR.getName() << DEFCOLO << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << BBLU << this->getName() << " couldn’t sign " << FOR.getName() << " because " << e.what() << DEFCOLO << std::endl;	
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (BCYN"The Grade is too High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (BRED"The Grade is too Low !");
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj):_name(obj._name)
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &obj)
{
	this->_grade = obj._grade;
	const_cast<std::string&>(this->_name) = obj._name;
	return (*this);
}

std::ostream &operator << (std::ostream &COUT, Bureaucrat &obj)
{
	COUT << BGRN << obj.getName() << ", bureaucrat grade " << obj.getGrade() << DEFCOLO << std::endl;
	return (COUT);
}

const std::string	Bureaucrat::getName()
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::decreaseGrade()
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150 || this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::increaseGrade()
{
	if (this->_grade < 1 || this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade--;
}

//execute the form
/*
	If it’s successful, print something like:
			<bureaucrat> executed <form>
	If not, print an explicit error message.

	try & catch
*/
void			Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << BYEL << this->getName() << " executed " << form.getName() << DEFCOLO << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << BYEL << this->getName() << " didn't execute " << form.getName() << " because -> " << e.what() << DEFCOLO << '\n';
	}
}


Bureaucrat::~Bureaucrat(){}