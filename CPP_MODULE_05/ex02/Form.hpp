
#ifndef FORM_HPP
#define FORM_HPP
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
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const int			_gradeEX;
		const int			_gradeSI;
		bool				_isSigned;
	public:
		Form();
		Form(std::string name, const int gradeEX, const int gradeSI);
		Form(const Form &obj);
		Form &operator = (Form const &obj);
		virtual ~Form();
		const std::string	getName() const;
		bool				getSign() const;
		int					getGradeEX()const;
		int					getGradeSI()const;
		void				beSigned(Bureaucrat &BUR);
		virtual void		execute(Bureaucrat const & executor) const = 0;
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
		class FornNotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream &operator << (std::ostream &COUT, Form &obj);

#endif