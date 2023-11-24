#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: virtual IMateriaSource
{
    protected:
        AMateria *source[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &other);
		MateriaSource &operator=(MateriaSource const &other);
		void learnMateria(AMateria *other);
		AMateria* createMateria(std::string const &type);
};

#endif