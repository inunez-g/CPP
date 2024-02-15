/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:43 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 14:14:17 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
    type = "NoType";
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = other;
}

Animal::Animal(std::string animaltype) : type(animaltype) {
    std::cout << "Animal NAME constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

Animal::~Animal(void)
{
     std::cout << "Animal Destructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "ZZZZzzz..." << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}