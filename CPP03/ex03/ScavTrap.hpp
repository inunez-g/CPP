/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:23:28 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/15 12:29:21 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    protected:
        static const int    _initHealth = 100;
        static const int    _initEnergy = 50;
        static const int    _initDamage = 20;
        bool _gateMode;

    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(ScavTrap const &other);
        ~ScavTrap(void);

        void guardGate(void);
        void attack(const std::string& target);//
};

#endif