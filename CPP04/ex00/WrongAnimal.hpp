/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:36:53 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/05 10:14:45 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "Animal.hpp"

class   WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal(std::string wronganimaltype);
        WrongAnimal &operator=(WrongAnimal const &other);
        virtual ~WrongAnimal();

        virtual void    makeSound() const; // virtual???
        std::string getType() const;
};

#endif