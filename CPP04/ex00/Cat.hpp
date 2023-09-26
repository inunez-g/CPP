/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:48 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/13 11:29:52 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class   Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(Cat const &other);
        ~Cat(void);
        
        void    makeSound() const;
        std::string getType() const;
};

#endif