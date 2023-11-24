#include "AMateria.hpp"

AMateria::AMateria()
{
     std::cout << "AMateria DEFAULT Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
     std::cout << "AMateria PARAM Constructor called" << std::endl;
     this->type = type;
}

AMateria::AMateria(AMateria const &other)
{
     std::cout << "AMateria COPY Constructor called" << std::endl;
     *this = other;   
}

AMateria &AMateria::operator=(AMateria const &other)
{
    std::cout << "AMateria OPERATOR contructor called" << std::endl;
    this->type = other.type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria DESTUCTOR called" << std::endl;
}

void AMateria::setType(std::string type)
{
	this->type = type;
}