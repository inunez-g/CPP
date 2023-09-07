/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:13:08 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/07 13:11:15 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    player1("Ramon");
    ClapTrap    player2("Pepe");

    
    
    player1.attack("Pepe");
    player1.info();
    player2.takeDamage(player1.getAttackDamage());
    player2.info();
    player1.beRepaired(2);
    player1.info();

    player1.setAttackDamage(10);
    player1.attack("Pepe");
    player2.takeDamage(player1.getAttackDamage());
    player2.info();
    player2.attack("Ramon");
    return (0);
}