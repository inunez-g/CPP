/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:55:19 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 12:37:56 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    protected:
        static const int    _initHealth = 100;
        static const int    _initEnergy = 100;
        static const int    _initDamage = 30;

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& other);
        FragTrap &operator=(FragTrap const &other);
        ~FragTrap(void);

        void highFivesGuys(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void info(void);
};

#endif