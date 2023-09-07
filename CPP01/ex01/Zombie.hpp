 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:29:54 by inunez-g          #+#    #+#             */
/*   Updated: 2023/07/19 19:00:07 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string zombie_name;
    public:
        Zombie(void);
        ~Zombie(void);
        void announce( void );
        Zombie* newZombie( std::string name );
        Zombie* zombieHorde( int N, std::string name );
};

#endif
