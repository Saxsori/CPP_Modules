#include <iostream>
#include <exception>

class kk
{
	private:
		/* data */
	public:
		kk(int i);
		~kk();
		// class j : public std::exception
		// {
		// 	private:
		// 		/* data */
		// 	public:
		// 		const char* what() const throw();
		// };
};

kk::kk(int i)
{
	if (i == 0)
		throw m();
}

kk::~kk(){}

// const char* kk::j::what() const throw()
// {
// 	std::cout << "blablabla" << std::endl;
// 	return (NULL);
// }



int main ()
{
	
	try 
	{
		kk m(0);
	}
	catch (std::exception & e)
	{
		e.what();
	}
}