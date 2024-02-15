#include "Bureaucrat.hpp"

int main()
{
    try
	{
		Form f1("Form 1", 25, 26);
		Form f2("Form 2", 25, 24);
		Form f3("Form 3", 190, 1);

	}
    catch (std::exception &except)
    {
        std::cout << except.what() << std::endl;
    }	


	std::cout << std::endl;
    std::cout << "***** MAKE A BUREAUCRAT TO SIGN FORMS ******" << std::endl;
    std::cout << std::endl;

    try
    {
		Bureaucrat b1("Bureau1", 43);
        Form f4("Form4", 75, 75);
		b1.signForm(f4);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << std::endl;
    std::cout << "---------MAKE A BUREAUCRAT TO SIGN FORM WITH INVALID GRADE-------" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat b2("Bureau2", 149);
        Form f5("Form5", 1, 1);
        b2.signForm(f5);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


	return 0;
}