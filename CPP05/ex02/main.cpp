#include <iostream>
#include "Bureaucrat.hpp" 
#include "ShrubberyCreationForm.hpp" 
#include "PresidentialPardonForm.hpp" 
#include "RobotomyRequestForm.hpp" 
#include <stdexcept>

int main(void)
{

	AForm *s = NULL;
	AForm *r = NULL;
	AForm *p = NULL;

	std::cout << std::endl;
	std::cout << "---------TRY TO CREATE FORMS-------" << std::endl;
    std::cout << std::endl;
    
	try
	{
        s = new ShrubberyCreationForm("Arbustinho");
		std::cout << *s;
        r = new RobotomyRequestForm("ConcreteWall");
		std::cout << *r;
        p = new PresidentialPardonForm("Arthur");
		std::cout << *p;

	}
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
	
		std::cout << std::endl;
		if (s)
			delete s;
		if (r)
			delete r;
		if (p)
			delete p;

	std::cout << std::endl;
    std::cout << "---------MAKE A BUREAUCRAT TO SIGN FORMS OF DIFFERENT TYPES-------" << std::endl;
    std::cout << std::endl;

    try
    {
		s = new ShrubberyCreationForm("Arbustinho");
        r = new RobotomyRequestForm("ConcreteWall");
        p = new PresidentialPardonForm("Arthur");
		Bureaucrat a("inunez-g", 2);
		a.signForm(*s);
		std::cout << *s;
		a.signForm(*r);
		std::cout << *r;
		a.signForm(*p);
		std::cout << *p;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
		
		std::cout << std::endl;
		if (s)
			delete s;
		if (r)
			delete r;
		if (p)
			delete p;

	std::cout << std::endl;
	std::cout << "---------MAKE A BUREAUCRAT TO EXE FORM OF DIFFERENT TYPES-------" << std::endl;
    std::cout << std::endl;

    try
    {
		s = new ShrubberyCreationForm("Arbustinho");
        r = new RobotomyRequestForm("ConcreteWall");
        p = new PresidentialPardonForm("Arthur");
        Bureaucrat a("inunez-g", 2);
		a.signForm(*s);
        r->beSigned(a);//Form can be signed by the form too
        a.signForm(*p);
        a.executeForm(*s);
        a.executeForm(*r);
        a.executeForm(*p);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

		std::cout << std::endl;
		if (s)
			delete s;
		if (r)
			delete r;
		if (p)
			delete p;

	std::cout << std::endl;
    std::cout << "---------MAKE A BUREAUCRAT TO EXE FORM OF DIFFERENT TYPES (FAIL: Not Signed)-------" << std::endl;
    std::cout << std::endl;

    try
    {
		s = new ShrubberyCreationForm("Arbustinho");
        r = new RobotomyRequestForm("ConcreteWall");
        p = new PresidentialPardonForm("Arthur");
        Bureaucrat a("inunez-g", 2);
        a.executeForm(*s);
        a.executeForm(*r);
        a.executeForm(*p);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
        
		std::cout << std::endl;
		if (s)
			delete s;
		if (r)
			delete r;
		if (p)
			delete p;

	 std::cout << std::endl;
    std::cout << "---------MAKE A BUREAUCRAT TO EXE FORM OF DIFFERENT TYPES (FAIL: Not enough grade)-------" << std::endl;
    std::cout << std::endl;

    try
    {
		s = new ShrubberyCreationForm("Arbustinho");
        r = new RobotomyRequestForm("ConcreteWall");
        p = new PresidentialPardonForm("Arthur");
        Bureaucrat a("inunez-g", 150);
        a.executeForm(*s);
        a.executeForm(*r);
        a.executeForm(*p);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
	
		std::cout << std::endl;
		if (s)
			delete s;
		if (r)
			delete r;
		if (p)
			delete p;


	return 0;
}