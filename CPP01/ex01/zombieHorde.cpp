/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:29:47 by inunez-g          #+#    #+#             */
/*   Updated: 2023/07/24 17:09:48 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *zombies;
    
    zombies = new Zombie[N];
    while (i < N)
    {
        zombies[i].zombie_name = name;
        zombies[i].announce();
        i++;
    }
    return(&zombies[0]);
}