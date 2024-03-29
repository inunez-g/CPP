/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:13:08 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/12 10:27:19 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    player1("Ramon");
    ScavTrap    player2("Pepe");
    FragTrap    player3("Mercedes");
    
    player2.attack("Mercedes");
    player2.info();
    player3.takeDamage(player2.getAttackDamage());
    player3.info();
    player3.beRepaired(10);
    player3.info();
    player3.attack("Pepe");
    player3.info();
    player1.takeDamage(player3.getAttackDamage());
    player1.info();
    player2.guardGate();
    player1.attack("Pepe");
    player3.guardGate();
    return (0);
}