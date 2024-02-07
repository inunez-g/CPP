#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm: public AForm
{
	public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &other);

        PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void execute(Bureaucrat const & executor) const; 
	};

#endif