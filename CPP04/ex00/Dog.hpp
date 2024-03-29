/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:54 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/04 12:14:50 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class   Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog& other);
        Dog &operator=(Dog const &other);
        ~Dog();
        
        void    makeSound() const;
        std::string getType() const;
};

#endif