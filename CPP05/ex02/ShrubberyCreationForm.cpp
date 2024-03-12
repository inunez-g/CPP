/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:17:27 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:49:47 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <stdexcept>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Unknown", "No target", false, 145, 137)
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", target, false, 145, 137)
{
    std::cout << "ShrubberyCreationForm Parameter constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): AForm(other)
{
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;

    this->isSigned = other.getSigned();
    return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
        std::ofstream out(this->getTarget() + "_shrubbery");
        out << "     	            .        +          .      .          ." << std::endl;
        out << "      .            _        .                    ." << std::endl;
        out << "   ,              /;-._,-.____        ,-----.__" << std::endl;
        out << "  ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
        out << "   `                 \\   _|`'=:_::.`.);  \\ __/ /" << std::endl;
        out << "                       ,    `./  \\:. `.   )==-'  ." << std::endl;
        out << "     .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
        out << " .           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
        out << "        .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
        out << "   .      ,=':  \\    ` `/` ' , , ,:' ''--`.--''---._/`7" << std::endl;
        out << "    `.   (    \\: \\,-._` ` + '\\, ,''   _,--._,---'':.__/" << std::endl;
        out << "               \\:  `  X` _| _,\\/'   .-'" << std::endl;
        out << " .               `:._:`\\____  /:'  /      .           ." << std::endl;
        out << "                     \\::.  :\\/:'  /              +" << std::endl;
        out << "    .                 `.:.  /:'  }      ." << std::endl;
        out << "            .           ):_(:;   \\           ." << std::endl;
        out << "                       /:. _/ ,  |" << std::endl;
        out << "                    . (|::.     ,`                  ." << std::endl;
        out << "      .                |::.    {\\ " << std::endl;
        out << "                       |::.\\  \\ `." << std::endl;
        out << "                       |:::(\\    |" << std::endl;
        out << "               O       |:::/{ }  |                  (o" << std::endl;
        out << "                )  ___/#\\::`/ (O `==._____   O, (O  /`" << std::endl;
        out << "           ~~~w/w~`~~,\\` `:/,-(~``~~~~~~~~`~o~\\~/~w|/~" << std::endl;
        out << "       ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~" << std::endl;
        out.close();
        std::cout << this->getTarget() << "has been successfully created!" << std::endl;
	}	
}