/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:53:00 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 18:42:56 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string humanA_name, Weapon &weap) : name(humanA_name), my_weapon(weap) {}

void HumanA::attack(){
    std::cout << name << " attacks with their " << my_weapon.getType() << std::endl;
};