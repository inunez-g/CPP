/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:12:05 by inunez-g          #+#    #+#             */
/*   Updated: 2023/07/26 17:35:59 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
    type = weapon_type;
};

void Weapon::setType(std::string weapon_type)
{
    type = weapon_type;
    return;
};

const std::string &Weapon::getType(void)
{
    return(type);
};