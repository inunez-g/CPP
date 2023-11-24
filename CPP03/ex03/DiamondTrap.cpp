/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:31:59 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 12:50:13 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap()
{
    std::cout << "Default constructor called DiamondTrap" << std::endl;
    _dName = "NoName_clap_name";
};

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{   
    std::cout << "String constructor called DiamondTrap" << std::endl;
    _name = name;
    _dName = name + "_clap_name";
    _energyPoints = ScavTrap::_initEnergy;
    _hitPoints = FragTrap::_initHealth;
    _attackDamage = FragTrap::_initDamage;
    /*std::cout << "FragTrap " << _name << " has been created with:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;*/
    //std::cout << "(" << _gateMode << ") gateMode." << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ScavTrap(other), FragTrap(other)
{
    std::cout << "Copy constructor called DiamondTrap" << std::endl;
    *this = other;
}


DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
    std::cout << "Copy assignment operator called FragTrap" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
};

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Destructor called DiamondTrap" << std::endl;
};

void    DiamondTrap::whoAmI(void)
{
    std::cout <<  "Hi, my name is ->" << _name << ", and my ClapTrap name is " << _dName << std::endl;//ClapTrap::_name << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    unsigned int before = _hitPoints;
    
    if (amount > _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "DiamondTrap " << _name << " received an attack that took away " << before - _hitPoints << " of it's hitPoints(Health). " << _hitPoints << " hitPoints left." << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints >= 1 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "DiamondTrap " << _name << " has been repaired using 1 energyPoint, gaining " << amount << " hitPoints(Health)." << std::endl;
        _hitPoints += amount;
    }
    else
    {
        std::cout << "DiamondTrap " << _name << " can't repaire itself because has no energyPoints or no HP." << std::endl;
    }
    
}

void DiamondTrap::info(void)
{
    std::cout << "DiamondTrap " << _name << " now has the following stats:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
}

std::string DiamondTrap::getName( void ) const {
    return _name;
}