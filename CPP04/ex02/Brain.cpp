/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:53:12 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 17:06:45 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
    int i = 0;

    for (int i = 0; i < 100; i++) {
        ideas[i] = "Idea number -> " + std::to_string(i);
    }
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain()
{
     std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &other)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    int i = -1;

    while (i++ < 100)
        this->ideas[i] = other.ideas[i];
    return *this;
}

std::string Brain::getIdea(int i)
{
    return (this->ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}