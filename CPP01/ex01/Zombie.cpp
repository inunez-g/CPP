/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:29:57 by inunez-g          #+#    #+#             */
/*   Updated: 2023/07/19 18:37:51 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    
};

void    Zombie::announce(void)
{
    std::cout << zombie_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
};

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *myzombie;

    myzombie = new Zombie;
    myzombie->zombie_name = name;
    return (myzombie);
}

Zombie::~Zombie(void)
{
    std::cout << zombie_name << " died" << std::endl;
    return ;
};