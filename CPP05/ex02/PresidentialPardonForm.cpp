#include "PresidentialPardonForm.hpp"
#include <stdexcept>

PresidentialPardonForm::PresidentialPardonForm(): AForm("Unknown", "No target", false, 25, 5)
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("PresidentialPardonForm", target, false, 25, 5)
{
    std::cout << "PresidentialPardonForm Parameter constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): AForm(other)
{
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;

    this->isSigned = other.getSigned();
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
    	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}	
}