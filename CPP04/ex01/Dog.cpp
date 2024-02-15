/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:51 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/04 14:08:53 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    brainIdeas = new Brain();
}

Dog::Dog(const Dog& other) : brainIdeas(new Brain())
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor called" << std::endl;
    delete brainIdeas;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = other.type;
    delete brainIdeas;
    brainIdeas = new Brain(*other.brainIdeas);
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "¡Guau!, guau!" << std::endl;
}

std::string Dog::getType() const
{
    return(type);
}

std::string Dog::getDogIdea(int i) const
{
    return(this->brainIdeas->getIdea(i));
}

void Dog::setDogIdea(int i, std::string idea)
{
    return(this->brainIdeas->setIdea(i, idea));
}