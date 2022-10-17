#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{

	std::cout << std::endl << BBLK << "*** TEST VALID FORM ***" << DEFCOLO << std::endl;

	try
	{
		Intern someRandomIntern;
		Bureaucrat n ("lala", 14);
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		n.signForm(*rrf);
		n.executeForm(*rrf);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BBLK << "*** TEST INVALID FORM ***" << DEFCOLO << std::endl;

	try
	{
		Intern someRandomIntern;
		Bureaucrat n ("lala", 14);
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
		n.signForm(*rrf);
		n.executeForm(*rrf);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
}