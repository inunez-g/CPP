/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:32:24 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/22 18:11:36 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    protected:
        std::string _dName;
        //using FragTrap::_hitPoints;
        //using ScavTrap::_energyPoints;
        //using FragTrap::_attackDamage;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap &operator=(DiamondTrap const &other);
        ~DiamondTrap(void);
        using ScavTrap::attack;
        std::string     getName( void ) const;
        void whoAmI(void);
};

#endif