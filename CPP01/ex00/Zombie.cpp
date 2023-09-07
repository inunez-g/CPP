/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:28:02 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 18:35:17 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    
};

Zombie::~Zombie(void)
{
    std::cout << name << " died" << std::endl;
    return ;
};

void    Zombie::announce(void)
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
};

