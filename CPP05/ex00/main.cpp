#include "Bureaucrat.hpp"

int main()
{
    std::cout << "COMENZAMOS CON BUREAUCRAT1 --> STACK" << std::endl;
    try
    {
        Bureaucrat a("Bureaucrat1", 3);
        std::cout << a;
        a.increment_grade();
        std::cout << a;
        a.decrement_grade();
        std::cout << a;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\nCOMENZAMOS CON BUREAUCRAT2 --> HEAP" << std::endl;
    Bureaucrat *b;
    try
    {
        b = new Bureaucrat("Bureaucrat2", 3);
        std::cout << *b;
        b->increment_grade();
        std::cout << *b;
        b->decrement_grade();
        std::cout << *b;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    if (b)
		delete b;
    std::cout << "\nCOMENZAMOS CON BUREAUCRAT3 (Error grade 0) --> STACK" << std::endl;
    try
    {
        Bureaucrat c("Bureaucrat3", 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\nCOMENZAMOS CON BUREAUCRAT4 (Error grade 151) --> STACK" << std::endl;
    try
    {
        Bureaucrat d("Bureaucrat4", 151);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\nCOMENZAMOS CON BUREAUCRAT5 (Error grade 151 con decrement_grade()) --> STACK" << std::endl;
    try
    {
        Bureaucrat e("Bureaucrat5", 150);
        std::cout << e << std::endl;
        e.decrement_grade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\nCOMENZAMOS CON BUREAUCRAT6 (Error grade 0 con increment_grade()) --> STACK" << std::endl;
    try
    {
        Bureaucrat f("Bureaucrat6", 1);
        std::cout << f << std::endl;
        f.increment_grade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}