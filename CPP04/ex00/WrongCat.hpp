/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:36:03 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/04 12:14:45 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class   WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& other);
        WrongCat &operator=(WrongCat const &other);
        ~WrongCat();
        
        void    makeSound() const;
        std::string getType() const;
};

#endif