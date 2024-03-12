/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:16:55 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 17:41:04 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("Unknown"), target("No target"), isSigned(false), grade_to_sign(150), grade_to_exec(150)
{
	std::cout <<  name << "Form Default constructor called" << std::endl;
}

AForm::AForm(std::string const &f_name, std::string const &f_target, bool isSigned, unsigned int f_grade_sign, unsigned int f_grade_exec)
	: name(f_name), target(f_target), isSigned(isSigned), grade_to_sign(f_grade_sign), grade_to_exec(f_grade_exec)
{
	std::cout << name << " Form Parameter constructor called" << std::endl;

	if(grade_to_sign < 1 || grade_to_exec < 1)
		throw AForm::HighGradeException();
	else if(grade_to_sign > 150 || grade_to_exec > 150)
		throw AForm::LowGradeException();
}

AForm::~AForm(){

	std::cout << name << " Form Destructor called" << std::endl;
}

AForm::AForm(AForm const &other): isSigned(false), grade_to_sign(other.getGradeSign()), grade_to_exec(other.getGradeExec())
{
	std::cout << name << " Form Copy constructor called" << std::endl;
	*this = other;
}

AForm &AForm::operator=(AForm const &other)
{
	std::cout << name << " Form Assignation operator called" << std::endl;
    this->isSigned = other.getSigned();
	return (*this);
}


void AForm::beSigned(Bureaucrat const &Bureau)
{
	if (Bureau.getGrade() > this->getGradeSign())
		throw AForm::HighGradeException();
	else
		this->isSigned = true;
}



std::string AForm::getName() const
{
    return (this->name);
}

const std::string AForm::getTarget() const
{
    return (this->target);
}

bool AForm::getSigned() const
{
    return (this->isSigned);
}

unsigned int AForm::getGradeSign() const
{
    return (this->grade_to_sign);
}

unsigned int AForm::getGradeExec() const
{
    return (this->grade_to_exec);
}

const char* AForm::HighGradeException::what() const throw()
{
	return ("Bureaucrat grade cannot be that high!");
}

const char* AForm::LowGradeException::what() const throw()
{
	return ("Bureaucrat grade cannot be that low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &out, AForm const &f)
{
    out << f.getName() << ":" << std::endl;
    out << "        > Target: " << f.getTarget() << std::endl;
    out << "        > isSigned: " << f.getSigned() << std::endl;
    out << "        > Grade to sign: " <<  f.getGradeSign() << std::endl;
    out << "        > Grade to execute: " <<  f.getGradeExec() << std::endl;
    return (out);
}