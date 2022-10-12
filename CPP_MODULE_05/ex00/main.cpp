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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << BCYN << "The Grade is too High !" << DEFCOLO << std::endl;
	return (NULL);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << BRED << "The Grade is too Low !" << DEFCOLO << std::endl;
	return (NULL);
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &obj)
{
	this->_grade = obj._grade;
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

int	Bureaucrat::getGrade()
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

Bureaucrat::~Bureaucrat(){}


int main ()
{
	try
	{
		std::cout << std::endl << BBLK << " *** NORMAL TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 13);
		std::cout << BUR;
		Bureaucrat BUR1("SASORI", 150);
		std::cout << BUR1;
	}
	catch (std::exception & e)
	{
		e.what();
	}
	try
	{
		std::cout << std::endl << BBLK << " *** HIGH GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR3("ABRAR", 0);
		std::cout << BUR3;
	}
	catch (std::exception & e)
	{
		e.what();
	}
	try
	{
		std::cout << std::endl << BBLK << " *** LOW GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 151);
		std::cout << BCYN << BUR;
	}
	catch (std::exception & e)
	{
		e.what();
	}
	try
	{
		std::cout << std::endl << BBLK << " *** DECREASE GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 150);
		std::cout << BCYN << BUR;
		BUR.decreaseGrade();
		std::cout << BCYN << BUR;
	}
	catch (std::exception & e)
	{
		e.what();
	}
	try
	{
		std::cout << std::endl << BBLK << " *** INCREASE GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 1);
		std::cout << BCYN << BUR;
		BUR.increaseGrade();
		std::cout << BCYN << BUR;
	}
	catch (std::exception & e)
	{
		e.what();
	}
}