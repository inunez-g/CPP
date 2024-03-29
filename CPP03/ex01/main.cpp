/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:13:08 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/12 09:52:12 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap    player1("Ramon");
    ScavTrap    player2("Pepe");
    
    player1.attack("Pepe");
    player1.info();
    player2.takeDamage(3);
    player2.info();
    player2.beRepaired(2);
    player2.info();
    player2.attack("Ramon");
    player2.info();
    player1.takeDamage(player2.getAttackDamage());
    player1.info();
    player2.guardGate();
    player1.attack("Pepe");
    return (0);
}