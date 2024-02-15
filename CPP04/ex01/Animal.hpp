/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:41 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/04 11:48:56 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& other);
        Animal(std::string animaltype);
        virtual ~Animal();
        Animal &operator=(Animal const &other);

        virtual void    makeSound() const;
        std::string getType() const;
};

#endif