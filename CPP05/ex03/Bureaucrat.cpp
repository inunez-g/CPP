#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout <<  name << "Bureaucrat Default constructor called" << std::endl;

}

Bureaucrat::Bureaucrat(std::string const &b_name, unsigned int b_grade): name(b_name)
{
	std::cout << name << " Bureaucrat Parameter constructor called" << std::endl;

	if(b_grade < 1)
		throw Bureaucrat::HighGradeException();
	else if(b_grade > 150)
		throw Bureaucrat::LowGradeException();
	else
        grade = b_grade;
}

Bureaucrat::~Bureaucrat(){

	std::cout << name << " Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	std::cout << name << " Bureaucrat Copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	std::cout << name << " Bureaucrat Assignation operator called" << std::endl;
    this->grade = other.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

unsigned int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::increment_grade()
{
    if (grade > 1)
        grade -= 1;
	else
		throw Bureaucrat::HighGradeException();
}

void Bureaucrat::decrement_grade()
{
	if (grade < 150)
        grade += 1;
	else
		throw Bureaucrat::LowGradeException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureau)
{
    out << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".";
    return (out);
}

const char* Bureaucrat::HighGradeException::what() const throw()
{
	return ("Bureaucrat grade cannot be that high!");
}

const char* Bureaucrat::LowGradeException::what() const throw()
{
	return ("Bureaucrat grade cannot be that low!");
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &except)
	{
		std::cout << this->getName() << " couldn't signed " << form.getName() << " because " << except.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	 try
    {
        form.execute(*this);
	}
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;

    }
}