/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:17:10 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:17:11 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp" 
#include "PresidentialPardonForm.hpp" 
#include "RobotomyRequestForm.hpp" 

int main()
{
    AForm *shrub = NULL;
	AForm *robot = NULL;
	AForm *presi = NULL;

	std::cout << std::endl;
	std::cout << "---------TRY TO CREATE FORMS-------" << std::endl;
    std::cout << std::endl;
    
	try
	{
        shrub = new ShrubberyCreationForm("Shrubbery");
		std::cout << *shrub;
        robot = new RobotomyRequestForm("Robotomy");
		std::cout << *robot;
        presi = new PresidentialPardonForm("Presidential");
		std::cout << *presi;

	}
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    if (shrub)
        delete shrub;
    if (robot)
        delete robot;
    if (presi)
        delete presi;

	std::cout << std::endl;
    std::cout << "        MAKE A BUREAUCRAT TO SIGN FORMS" << std::endl;
    std::cout << std::endl;

    try
    {
		shrub = new ShrubberyCreationForm("Shrubbery");
        robot = new RobotomyRequestForm("Robotomy");
        presi = new PresidentialPardonForm("Presidential");
        Bureaucrat iker("inunez-g", 2);
        iker.signForm(*shrub);
		std::cout << *shrub;
		iker.signForm(*robot);
		std::cout << *robot;
		iker.signForm(*presi);
		std::cout << *presi;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    if (shrub)
        delete shrub;
    if (robot)
        delete robot;
    if (presi)
        delete presi;

	std::cout << std::endl;
    std::cout << "--------- MAKE A BUREAUCRAT TO EXECUTE FORMS -------" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat iker("inunez-g", 2);
        shrub = new ShrubberyCreationForm("Shrubbery");
        robot = new RobotomyRequestForm("Robotomy");
        presi = new PresidentialPardonForm("Presidential");
        iker.signForm(*shrub);
        iker.signForm(*robot);
        iker.signForm(*presi);
        iker.executeForm(*shrub);
        iker.executeForm(*robot);
        iker.executeForm(*presi);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    if (shrub)
        delete shrub;
    if (robot)
        delete robot;
    if (presi)
        delete presi;

    std::cout << std::endl;
    std::cout << "--------- MAKE A BUREAUCRAT TO EXE FORMS (ERROR) -------" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat iker("inunez-g", 150);
        shrub = new ShrubberyCreationForm("Shrubbery");
        robot = new RobotomyRequestForm("Robotomy");
        presi = new PresidentialPardonForm("Presidential");
        iker.executeForm(*shrub);
        iker.executeForm(*robot);
        iker.executeForm(*presi);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    if (shrub)
        delete shrub;
    if (robot)
        delete robot;
    if (presi)
        delete presi;

	return 0;
}