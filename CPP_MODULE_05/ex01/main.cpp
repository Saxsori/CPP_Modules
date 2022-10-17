#include "Form.hpp"
#include "Bureaucrat.hpp"

int main ()
{
	std::cout << std::endl << BBLK << " *** COPY CONSTRUCTOR TEST *** " << DEFCOLO << std::endl;
	Form FOR("SASORI", 4, 10);
	std::cout << FOR;
	Form FOR2(FOR);
	std::cout << FOR2;
	std::cout << std::endl << BBLK << " *** COPY ASSIGNMENT TEST *** " << DEFCOLO << std::endl;
	std::cout << FOR2;
	Form FOR3 = FOR2;
	std::cout << FOR3;
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
		Form FOR("SASORI", 151, 15);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** LOW SI GRADE TEST *** " << DEFCOLO << std::endl;
		Form FOR("SASORI", 10, 154);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** HIGH EX GRADE TEST *** " << DEFCOLO << std::endl;
		Form FOR("SASORI", 0, 3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl << BBLK << " *** HIGH SI GRADE TEST *** " << DEFCOLO << std::endl;
		Form FOR("SASORI", 150, 0);
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
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << DEFCOLO;
}