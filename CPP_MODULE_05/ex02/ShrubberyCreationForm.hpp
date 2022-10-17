/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:24:37 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/17 04:35:10 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <exception>
#include <fstream>
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
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm &operator = (ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm();
		void		execute(Bureaucrat const & executor) const;
};

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
	// form is signed 
	// grade of the bureaucrat attempting to execute the form is high enough.
	// Otherwise, throw an appropriate exception.
	
	// making file <target>_shrubbery
	// writes ASCII trees inside it
}


#endif