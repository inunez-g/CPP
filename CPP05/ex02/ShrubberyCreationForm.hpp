#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm: public AForm
{
	public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &other);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		void execute(Bureaucrat const & executor) const; 
	};

#endif