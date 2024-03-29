/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:54:58 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 12:37:13 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(void): ScavTrap()
{
    std::cout << "Default constructor called FragTrap" << std::endl;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "ScavTrap" << _name << "has been created with:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
    std::cout << "(" << _gateMode << ") gateMode." << std::endl;
};

FragTrap::FragTrap(std::string name): ScavTrap(name)
{   
    std::cout << "String constructor called FragTrap" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    _gateMode = false;
    std::cout << "FragTrap " << _name << " has been created with:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
    std::cout << "(" << _gateMode << ") gateMode." << std::endl;
};

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "Copy constructor called FragTrap" << std::endl;
    *this = other;
}


FragTrap &FragTrap::operator=(FragTrap const &other)
{
    std::cout << "Copy assignment operator called FragTrap" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
};

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor called FragTrap" << std::endl;
};

void    FragTrap::highFivesGuys(void)
{
    std::cout <<  _name << " has used highFivesGuy -> 'Hi! HighFive!!!'" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints >= 1 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << _name << " can't attack because has no energyPoints or no HP." << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    unsigned int before = _hitPoints;
    
    if (amount > _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "FragTrap " << _name << " received an attack that took away " << before - _hitPoints << " of it's hitPoints(Health). " << _hitPoints << " hitPoints left." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints >= 1 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "FragTrap " << _name << " has been repaired using 1 energyPoint, gaining " << amount << " hitPoints(Health)." << std::endl;
        _hitPoints += amount;
    }
    else
    {
        std::cout << "FragTrap " << _name << " can't repaire itself because has no energyPoints or no HP." << std::endl;
    }
    
}

void FragTrap::info(void)
{
    std::cout << "FragTrap " << _name << " now has the following stats:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
}