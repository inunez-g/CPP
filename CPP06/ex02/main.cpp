/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:05:09 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 18:05:10 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "Entro con el número --> " << r_number << std::endl;

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
	catch(std::bad_cast & except){
        std::cout << except.what() << " --> No soy A" << std::endl;
    }
	try {
		Base &ref = dynamic_cast<B &>(p);	
		std::cout << "p: B" << std::endl;	
		return ;	
		(void)ref;
	}
	catch(std::bad_cast & except){
        std::cout << except.what() << " --> No soy B" << std::endl;
    }
	try {
		Base &ref = dynamic_cast<C &>(p);	
		std::cout << "p: C" << std::endl;	
		return ;	
		(void)ref;
	}
	catch(std::bad_cast & except){
        std::cout << except.what() << " --> No soy C" << std::endl;
    }
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