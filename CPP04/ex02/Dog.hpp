/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:54 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/14 12:01:32 by inunez-g         ###   ########.fr       */
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
        Dog &operator=(Dog const &other);
        ~Dog(void);
        
        void    makeSound() const override;
        std::string getType() const override;
};

#endif