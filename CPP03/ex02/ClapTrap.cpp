/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:13:10 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/24 12:10:48 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called ClapTrap" << std::endl;
    std::cout << "ClapTrap" << _name << "has been created with:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;

};

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{   
    std::cout << "String constructor called ClapTrap" << std::endl;
    std::cout << "ClapTrap " << _name << " has been created with:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called ClapTrap" << std::endl;
    *this = other;
};


ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "Copy assignment operator called ClapTrap" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
};

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called ClapTrap" << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints >= 1 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " can't attack because has no energyPoints or no HP." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int before = _hitPoints;
    
    if (amount > _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " received an attack that took away " << before - _hitPoints << " of it's hitPoints(Health). " << _hitPoints << " hitPoints left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints >= 1 && _hitPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " has been repaired using 1 energyPoint, gaining " << amount << " hitPoints(Health)." << std::endl;
        _hitPoints += amount;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " can't repaire itself because has no energyPoints or no HP." << std::endl;
    }
    
}

void ClapTrap::info(void)
{
    std::cout << "ClapTrap " << _name << " now has the following stats:" << std::endl;
    std::cout << "(" << _hitPoints << ") hitPoints." << std::endl;
    std::cout << "(" << _energyPoints << ") energyPoints." << std::endl;
    std::cout << "(" << _attackDamage << ") attackDamage." << std::endl;
}

int ClapTrap::getHitPoints(void)
{
    return(_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void)
{
    return(_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void)
{
    return(_attackDamage);
}

void    ClapTrap::setAttackDamage(unsigned int newDamage)
{
    _attackDamage = newDamage;
    std::cout << "AttackDamage has been updated for " << _name << ", now has (" << _attackDamage << ")" << std::endl;
}