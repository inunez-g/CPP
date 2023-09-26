/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:41 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/13 11:33:31 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Animal.hpp"

class   Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& other);
        Animal &operator=(Animal const &other);
        ~Animal(void);

        virtual void    makeSound() const;
        std::string getType() const;
};

#endif