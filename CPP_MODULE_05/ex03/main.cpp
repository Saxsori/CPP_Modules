#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{

	std::cout << std::endl << BBLK << "*** TEST VALID FORM ***" << DEFCOLO << std::endl;


	Intern someRandomIntern;
	Bureaucrat n ("lala", 14);
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		n.signForm(*rrf);
		n.executeForm(*rrf);
		delete rrf;
	}

	std::cout << std::endl << BBLK << "*** TEST INVALID FORM ***" << DEFCOLO << std::endl;

	Intern someRandomIntern1;
	Bureaucrat n1 ("lala", 14);
	Form* rrf1;
	rrf1 = someRandomIntern1.makeForm("Robotomy request", "Bender");
	if (rrf1)
	{
		n1.signForm(*rrf1);
		n1.executeForm(*rrf1);
		delete rrf1;
	}
}