#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
	Bureaucrat n ("lala", 42);
	Form *Sh = new ShrubberyCreationForm("home");
	n.signForm(*Sh);
	n.executeForm(*Sh);
	delete Sh;

	Bureaucrat b ("boo", 42);
	Form *Rr = new RobotomyRequestForm("home");
	b.signForm(*Rr);
	b.executeForm(*Rr);
	delete Rr;

	Bureaucrat a ("abrar", 42);
	Form *Pp = new ShrubberyCreationForm("home");
	a.signForm(*Pp);
	a.executeForm(*Pp);
	delete Sh;
	
}