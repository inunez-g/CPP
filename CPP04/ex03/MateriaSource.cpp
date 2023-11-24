#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;

    std::cout << "MateriaSource DEFAULT Constructor called" << std::endl;
    while (i < 4)
    {
        source[i] = NULL;
        i++;
    }
}
        
MateriaSource::MateriaSource(MateriaSource const &other)
{
    std::cout << "AMateria COPY Constructor called" << std::endl;
    *this = other; 
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{

}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria *other)
{

}

AMateria* MateriaSource::createMateria(std::string const &type)
{

}