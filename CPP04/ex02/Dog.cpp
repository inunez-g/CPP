/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:51 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/15 11:10:12 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
    brainIdeas = new Brain(Brain());
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

Dog::~Dog(void)
{
    delete brainIdeas;
    std::cout << "Dog Destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "¡Guau!, guau!" << std::endl;
}

std::string Dog::getType() const
{
    return(type);
}