/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:23:31 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/12 10:22:07 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout << "Default constructor called ScavTrap" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _gateMode = false;
    std::cout << "ScavTrap" << _name << "has been created with:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
    std::cout << "(" << _gateMode << ") gateMode." << std::endl;
};

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{   
    std::cout << "String constructor called ScavTrap" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _gateMode = false;
    std::cout << "ScavTrap " << _name << " has been created with:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
    std::cout << "(" << _gateMode << ") gateMode." << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << "Copy assignment operator called ScavTrap" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
};

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor called ScavTrap" << std::endl;
};

void    ScavTrap::guardGate(void)
{
    _gateMode = true;
    std::cout <<  _name << " has used GuardGate and it's now in Gate keeper mode." << std::endl;
}