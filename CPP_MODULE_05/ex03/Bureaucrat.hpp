/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:23:07 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/13 23:54:03 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define BPUR "\e[0;35m"
# define DEFCOLO "\033[0m"
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat &operator = (Bureaucrat const &obj);
		Bureaucrat(const Bureaucrat &obj);
		const std::string	getName();
		int					getGrade();
		void				increaseGrade();
		void				decreaseGrade();
		void				signForm(Form &FOR);
		void				executeForm(Form const & form);
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream &operator << (std::ostream &COUT, Bureaucrat &obj);

#endif