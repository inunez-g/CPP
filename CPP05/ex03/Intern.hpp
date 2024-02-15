#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class Intern
{
    protected:
        typedef AForm *(Intern::*ptr)(std::string form);
        ptr *types;
    public:
        Intern();
        Intern &operator=(Intern const &other);
        ~Intern();
        Intern(Intern const &other);

        AForm *makeForm(std::string form, std::string target);
        AForm *ShubberyCreation(std::string target);
        AForm *RobotomyCreation(std::string target);
        AForm *PresidentialCreation(std::string target);

        class FormNotFoundException : public std::exception
		{
			virtual const char* what() const throw();	
		};
};

#endif