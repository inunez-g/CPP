/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:46 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/04 14:14:52 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    brainIdeas = new Brain();
}

Cat::Cat(const Cat& other) : brainIdeas(new Brain())
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->type = other.type;
    delete brainIdeas;
    brainIdeas = new Brain(*other.brainIdeas);
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor called" << std::endl;
    delete brainIdeas;
}

void    Cat::makeSound() const
{
    std::cout << "¡Miau!, miau!" << std::endl;
}

std::string Cat::getType() const
{
    return(type);
}

std::string Cat::getCatIdea(int i) const
{
    return(this->brainIdeas->getIdea(i));
}

void Cat::setCatIdea(int i, std::string idea)
{
    this->brainIdeas->setIdea(i, idea);
}