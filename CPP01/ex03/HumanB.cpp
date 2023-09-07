/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:53:03 by inunez-g          #+#    #+#             */
/*   Updated: 2023/07/28 18:55:05 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*HumanB::HumanB(std::string humanB_name){
    name = humanB_name;
};*/

HumanB::HumanB(std::string humanB_name) : name(humanB_name) {}

void HumanB::attack(){
    std::cout << name << " attacks with their " << my_weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon &weapon_name){
    my_weapon = &weapon_name;
}