/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:54 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 17:04:28 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class   Dog: public Animal
{
    private:
        Brain   *brainIdeas;
    public:
        Dog();
        Dog(const Dog& other);
        virtual ~Dog();
        Dog &operator=(Dog const &other);
        
        void    makeSound() const;
        std::string getType() const;
        std::string getDogIdea(int i) const;
        void setDogIdea(int i, std::string idea);
};

#endif