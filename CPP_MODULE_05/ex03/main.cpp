#include "Form.hpp"
#include "Bureaucrat.hpp"

void	nn ()
{
	try
	{
		Bureaucrat BUR("ABRAR", 11);
		Form FOR("SASORI", 4, 10);
		std::cout << FOR;
		FOR.beSigned(BUR);
	}
	catch (const std::exception& e)
	{
		std::cout << " couldn’t sign " << " because " << e.what() << DEFCOLO << std::endl;	
		// e.what();
	}
	
}

int main ()
{
	try
	{
		std::cout << std::endl << BBLK << " *** UNSIGN TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 11);
		std::cout << BUR;
		Form FOR("SASORI", 4, 10);
		std::cout << FOR;
		BUR.signForm(FOR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** SIGN TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 13);
		std::cout << BUR;
		Form FOR("SASORI", 15, 15);
		std::cout << FOR;
		BUR.signForm(FOR);
		FOR.beSigned(BUR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** LOW EX GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 150);
		std::cout << BUR;
		Form FOR("SASORI", 151, 15);
		std::cout << FOR;
		FOR.beSigned(BUR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** LOW SI GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 150);
		std::cout << BUR;
		Form FOR("SASORI", 10, 154);
		std::cout << FOR;
		FOR.beSigned(BUR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** HIGH EX GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 3);
		std::cout << BUR;
		Form FOR("SASORI", 0, 3);
		std::cout << FOR;
		FOR.beSigned(BUR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** HIGH SI GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 3);
		std::cout << BUR;
		Form FOR("SASORI", 150, 0);
		std::cout << FOR;
		FOR.beSigned(BUR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** LOW BUR GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 154);
		std::cout << BUR;
		Form FOR("SASORI", 158, 0);
		std::cout << FOR;
		FOR.beSigned(BUR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** HIGH BUR GRADE TEST *** " << DEFCOLO << std::endl;
		Bureaucrat BUR("ABRAR", 0);
		std::cout << BUR;
		Form FOR("SASORI", 151, 15);
		std::cout << FOR;
		FOR.beSigned(BUR);
		std::cout << FOR;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << DEFCOLO;
}