#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base    *generate(void)
{
    std::srand(std::time(nullptr));
    int r_number = std::rand() % 3;

    if (r_number == 0)
        return(new A);
    else if (r_number == 1)
        return(new B);
    else
        return(new C);
}

void    identify(Base* p)
{
    char type = '\0';

    std::cout << "POINTER" << std::endl;
    if (dynamic_cast<A*>(p))
        type = 'A';
    else if (dynamic_cast<B*>(p))
        type = 'B';
    else if (dynamic_cast<C*>(p))
        type = 'C';
    if (type)
        std::cout << "p: " << type << std::endl;
}

void    identify(Base& p)
{
    std::cout << "REFERENCE" << std::endl;
	try {
		Base &ref = dynamic_cast<A &>(p);	
		std::cout << "p: A" << std::endl;
		return ;	
		(void)ref;
	}
	catch(std::bad_cast & except){}
	try {
		Base &ref = dynamic_cast<B &>(p);	
		std::cout << "p: B" << std::endl;	
		return ;	
		(void)ref;
	}
	catch(std::bad_cast & except){}
	try {
		Base &ref = dynamic_cast<C &>(p);	
		std::cout << "p: C" << std::endl;	
		return ;	
		(void)ref;
	}
	catch(std::bad_cast & except){}
}

int main(void)
{
    Base *ptr = generate();

    std::cout << "IDENTIFY WITH ";
    identify(ptr);
    std::cout << "IDENTIFY WITH ";
    identify(*ptr);

    delete ptr;
}