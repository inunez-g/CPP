/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:23:31 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 12:31:55 by inunez-g         ###   ########.fr       */
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
    std::cout << "Copy constructor called ScavTrap" << std::endl;
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

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints >= 1 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " can't attack because has no energyPoints or no HP." << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    unsigned int before = _hitPoints;
    
    if (amount > _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ScavTrap " << _name << " received an attack that took away " << before - _hitPoints << " of it's hitPoints(Health). " << _hitPoints << " hitPoints left." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints >= 1 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ScavTrap " << _name << " has been repaired using 1 energyPoint, gaining " << amount << " hitPoints(Health)." << std::endl;
        _hitPoints += amount;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " can't repaire itself because has no energyPoints or no HP." << std::endl;
    }
    
}

void ScavTrap::info(void)
{
    std::cout << "ScavTrap " << _name << " now has the following stats:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
}