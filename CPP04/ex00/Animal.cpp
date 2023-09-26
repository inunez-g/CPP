/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:43 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/13 11:29:43 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor called" << std::endl;
    type = "NoType";
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

Animal::~Animal(void)
{
     std::cout << "Destructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "ZZZZzzz..." << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}