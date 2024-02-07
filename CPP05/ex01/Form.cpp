#include "Form.hpp"

Form::Form(): name("Unknown"), isSigned(false), grade_to_sign(150), grade_to_exec(150)
{
	std::cout <<  name << "Form Default constructor called" << std::endl;
}

Form::Form(std::string const &f_name, unsigned int f_grade_sign, unsigned int f_grade_exec): name(f_name), isSigned(false), grade_to_sign(f_grade_sign), grade_to_exec(f_grade_exec)
{
	std::cout << name << " Form Parameter constructor called" << std::endl;

	if(grade_to_sign < 1 || grade_to_exec < 1)
		throw Form::HighGradeException();
	else if(grade_to_sign > 150 || grade_to_exec > 150)
		throw Form::LowGradeException();
}

Form::~Form(){

	std::cout << name << " Form Destructor called" << std::endl;
}

Form::Form(Form const &other): isSigned(false), grade_to_sign(other.getGradeSign()), grade_to_exec(other.getGradeExec())
{
	std::cout << name << " Form Copy constructor called" << std::endl;
	*this = other;
}

Form &Form::operator=(Form const &other)
{
	std::cout << name << " Form Assignation operator called" << std::endl;
    this->isSigned = other.getSigned();
	return (*this);
}


void Form::beSigned(Bureaucrat const &Bureau)
{
	if (Bureau.getGrade() > this->getGradeSign())
		throw Form::HighGradeException();
	else
		this->isSigned = true;
}



std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSigned() const
{
    return (this->isSigned);
}

unsigned int Form::getGradeSign() const
{
    return (this->grade_to_sign);
}

unsigned int Form::getGradeExec() const
{
    return (this->grade_to_exec);
}

const char* Form::HighGradeException::what() const throw()
{
	return ("Bureaucrat grade cannot be that high!");
}

const char* Form::LowGradeException::what() const throw()
{
	return ("Bureaucrat grade cannot be that low!");
}