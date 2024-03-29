/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:53:25 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 17:06:40 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class   Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        ~Brain();
        Brain &operator=(Brain const &other);

        std::string getIdea(int i);
        void setIdea(int i, std::string idea);
};

#endif