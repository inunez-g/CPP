/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:37:03 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/04 12:15:41 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    type = "NoType";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::WrongAnimal(std::string wronganimaltype) : type(wronganimaltype) {
    std::cout << "WrongAnimal NAME constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
     std::cout << "WrongAnimal Destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Z.z.Z.z.Z" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(type);
}