/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:13:08 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/07 12:14:28 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    ramon("Ramon");
    
    ramon.attack("Pepe");
    ramon.info();
    ramon.takeDamage(3);
    ramon.info();
    ramon.beRepaired(2);
    ramon.info();
    return (0);
}