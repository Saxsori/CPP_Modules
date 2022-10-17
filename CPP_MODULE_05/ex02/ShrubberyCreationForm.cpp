/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:05:58 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 10:06:44 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("", 45, 72), _target(""){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 137, 145), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):Form(obj._target, 137, 145)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &obj)
{
	this->_target = obj._target;
	return (*this);
}

/*
	// form is signed 
	// grade of the bureaucrat attempting to execute the form is high enough.
	// Otherwise, throw an appropriate exception.
	
	// making file <target>_shrubbery
	// writes ASCII trees inside it
*/
ShrubberyCreationForm::~ShrubberyCreationForm(){}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{	
	if (!this->getSign())
		throw (ShrubberyCreationForm::FornNotSigned());
	if (executor.getGrade() >= this->getGradeEX())
		throw (ShrubberyCreationForm::GradeTooLowException());
	std::ofstream MyFile((this->_target + "_Shrubbery").c_str());
	MyFile << "                     . . ." << std::endl;
	MyFile << "                   .        .  .     ..    ." << std::endl;
	MyFile << "                .                 .         .  ." << std::endl;
	MyFile << "                                ." << std::endl;
	MyFile << "                               .                .." << std::endl;
	MyFile << "               .          .            .              ." << std::endl;
	MyFile << "               .            '.,        .               ." << std::endl;
	MyFile << "               .              'b      *" << std::endl;
	MyFile << "                .              '$    #.                .." << std::endl;
	MyFile << "               .    .           $:   #:               ." << std::endl;
	MyFile << "             ..      .  ..      *#  @):        .   . ." << std::endl;
	MyFile << "                          .     :@,@):   ,.**:'   ." << std::endl;
	MyFile << "              .      .,         :@@*: ..**'      .   ." << std::endl;
	MyFile << "                       '#o.    .:(@'.@*'''  ." << std::endl;
	MyFile << "               .  .       'bq,..:,@@*'   ,*      .  ." << std::endl;
	MyFile << "                          ,p$q8,:@)'  .p*'      ." << std::endl;
	MyFile << "                   .     '  . '@@Pp@@*'    .  ." << std::endl;
	MyFile << "                    .  . ..    Y7'.'     .  ." << std::endl;
	MyFile << "                              :@):." << std::endl;
	MyFile << "                             .:@:'." << std::endl;
	MyFile << "                           .::(@:.      " << std::endl;
	MyFile.close();
}