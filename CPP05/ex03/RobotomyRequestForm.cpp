/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:19:30 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:19:31 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdexcept>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Unknown", "No target", false, 72, 45)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm", target, false, 72, 45)
{
    std::cout << "RobotomyRequestForm Parameter constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): AForm(other)
{
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;

    this->isSigned = other.getSigned();
    return (*this);
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExec())
    {
    	std::cout << this->name << " error:"; 
	 	throw AForm::LowGradeException();
	}
	if (!this->getSigned())
    {
    	std::cout << this->name << " error:"; 
	 	throw AForm::FormNotSignedException();
	}
	else
	{
    	std::cout << "<DRILL NOISES> " << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
	}	
}