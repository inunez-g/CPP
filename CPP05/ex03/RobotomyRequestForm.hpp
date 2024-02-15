#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm: public AForm
{
	public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &other);

        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		void execute(Bureaucrat const & executor) const; 
	};

#endif