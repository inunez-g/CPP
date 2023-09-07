/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:30:00 by inunez-g          #+#    #+#             */
/*   Updated: 2023/07/24 17:13:31 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *pointer;
    int n_zombies = 5;
    
    pointer = NULL;
    pointer = pointer->zombieHorde(n_zombies, "Zombie");
    delete []pointer;
    return (0);
}