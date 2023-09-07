/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:27:39 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 18:34:57 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    Zombie myzombie;
    Zombie *pointer;
    
    pointer = myzombie.newZombie("Zombie"); //heap
    pointer->announce();
  
 
    myzombie.randomChump("Zombie2"); //Stack
    delete pointer;
    return (0);
    
}