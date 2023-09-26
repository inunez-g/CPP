/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:35:53 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/14 09:41:31 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default constructor called" << std::endl;
    type = "Cat";
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

WrongCat::~WrongCat(void)
{
     std::cout << "Destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "¡Grrr!, grrr!" << std::endl;
}

std::string WrongCat::getType() const
{
    return(type);
}