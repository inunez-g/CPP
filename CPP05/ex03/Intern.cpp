/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:19:18 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:19:19 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called." << std::endl;
}

Intern::Intern(Intern const &other)
{
    std::cout << "Inter Copy operator called." << std::endl;
    *this = other;
}

Intern &Intern::operator=(Intern const &other)
{
    std::cout << "Intern Assignation operator called." << std::endl;
    (void)other;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called." << std::endl;
}

AForm *Intern::ShubberyCreation(std::string target)
{	
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::RobotomyCreation(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::PresidentialCreation(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm   *Intern::makeForm(std::string f_name, std::string target)
{
    std::string PosibleForms[3];
    int i = 0;
    ptr types[] = {&Intern::ShubberyCreation, &Intern::RobotomyCreation, &Intern::PresidentialCreation};

    PosibleForms[0] = "shrubberycreation";
    PosibleForms[1] = "robotomyrequest";
    PosibleForms[2] = "presidentialpardon";

    std::transform(f_name.begin(), f_name.end(), f_name.begin(), ::tolower);
    while ((i < 3) && (f_name != PosibleForms[i]))
        i++;
    if (i == 3)
        throw Intern::FormNotFoundException();
    else
    {
        std::cout << "Intern creates " << PosibleForms[i] << " form." << std::endl;	
        return((this->*(types[i]))(target));
    }
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return ("The form name that has been passed in not correct. Try again.");
}

