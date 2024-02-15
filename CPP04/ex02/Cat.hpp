/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:27:48 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 17:02:44 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class   Cat: public Animal
{
    private:
        Brain   *brainIdeas;
    public:
        Cat();
        Cat(const Cat& other);
        virtual ~Cat();
        Cat &operator=(Cat const &other);
        
        void    makeSound() const;
        std::string getType() const;
        std::string getCatIdea(int i) const;
        void setCatIdea(int i, std::string idea);
};

#endif