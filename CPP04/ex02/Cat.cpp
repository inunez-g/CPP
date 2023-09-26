/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:46 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/15 10:44:11 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
    brainIdeas = new Brain();
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

Cat::~Cat(void)
{
    delete brainIdeas;
    std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "¡Miau!, miau!" << std::endl;
}

std::string Cat::getType() const
{
    return(type);
}