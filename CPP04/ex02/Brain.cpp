/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:53:12 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/15 11:05:10 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
    int i = -1;

    while (i++ < 100)
    {
        ideas[i] = "Idea number -> " + std::to_string(i);
        //if (i == 50)
            //std::cout << "Printing " << ideas[i] << std::endl;
    }
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(Brain const &other)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    int i = -1;

    while (i++ < 100)
        this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain(void)
{
     std::cout << "Brain Destructor called" << std::endl;
     delete[] ideas;
}