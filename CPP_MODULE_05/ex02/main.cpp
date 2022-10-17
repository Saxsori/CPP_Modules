#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
	std::cout << BBLK << "*** TEST NORMAL ***" << DEFCOLO << std::endl;
	Bureaucrat n ("lala", 42);
	Form *Sh = new ShrubberyCreationForm("home");
	n.signForm(*Sh);
	n.executeForm(*Sh);
	delete Sh;

	Bureaucrat b ("boo", 42);
	Form *Rr = new RobotomyRequestForm("request");
	b.signForm(*Rr);
	b.executeForm(*Rr);
	delete Rr;

	Bureaucrat a ("abrar", 2);
	Form *Pp = new PresidentialPardonForm("pardon");
	a.signForm(*Pp);
	a.executeForm(*Pp);
	delete Pp;

	std::cout << BBLK << "*** TEST LOW EXECUTE GRADE ***" << DEFCOLO << std::endl;
	Bureaucrat aa ("abrar", 42);
	Form *test = new PresidentialPardonForm("pardon");
	aa.signForm(*test);
	aa.executeForm(*test);
	delete test;
	
}