#include <iostream>
#include "Bureaucrat.hpp" 
#include "Intern.hpp" 
#include "ShrubberyCreationForm.hpp" 
#include "PresidentialPardonForm.hpp" 
#include "RobotomyRequestForm.hpp" 
#include <stdexcept>

int main(void)
{

	std::cout << std::endl;
	std::cout << "---------CREATE INTERN AND ASK FOR FORMS-------" << std::endl;
    std::cout << std::endl;
    
	Intern myIntern;
	AForm* rf;
	AForm* rf2;
	AForm* rf3;
	AForm* rf4;

	
	rf = NULL;
	rf2 = NULL;
	rf3 = NULL;
	rf4 = NULL;
	try
	{
		rf = myIntern.makeForm("PresidentialPardon", "Bender");
		std::cout << *rf;
		rf2 = myIntern.makeForm("RobotomyRequest", "Bender");
		std::cout << *rf2;
		rf3 = myIntern.makeForm("ShrubberyCreation", "Bender");
		std::cout << *rf3;
		rf4 = myIntern.makeForm("Random", "Bender"); //will throw an exception, does not match
		std::cout << *rf4;
	}
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
	
		std::cout << std::endl;
		if (rf)
			delete rf;
		if (rf2)
			delete rf2;
		if (rf3)
			delete rf3;
		if (rf4)
			delete rf4;

	std::cout << std::endl;
    std::cout << "---------CREATE BUREAUCRAT, ASK FOR FORM, SIGN AND EXECUTE-------" << std::endl;
    std::cout << std::endl;

    AForm* form;

    form = NULL;
    try
    {
		Bureaucrat iker("inunez-g", 2);
        form = myIntern.makeForm("Presidential Pardon", "Bender");
        std::cout << *form;
		iker.signForm(*form);
		iker.executeForm(*form);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

        std::cout << std::endl;
        if (form)
            delete form;

	return 0;
}