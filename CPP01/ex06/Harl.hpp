/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:07:06 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 17:17:30 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <array>



class Harl
{
    public:
        //typedef void (*FunctPtr)();
        //typedef void(Harl::*FunctPtr)(void);
        Harl(void);
        void    complain( std::string level );
        //void    initialize_arrays(void);

    private:
        std::string mode;
        //std::array <FunctPtr, 4> pointer;
        //std::array <std::string, 4> options;
        
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );

};

#endif