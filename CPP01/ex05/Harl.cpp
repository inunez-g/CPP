/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:19:42 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/04 20:02:11 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    
};

void    Harl::debug( void ){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void    Harl::info( void ){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn´t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void    Harl::warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void    Harl::error( void ){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void    Harl::initialize_arrays(void){
    options[0] = "DEBUG";
    options[1] = "INFO";
    options[2] = "WARNING";
    options[3] = "ERROR";
    
    pointer[0] = &Harl::debug;
    pointer[1] = &Harl::info;
    pointer[2] = &Harl::warning;
    pointer[3] = &Harl::error;
    return;
}

void    Harl::complain( std::string level ){
    int i = 0;
    
    mode = level;
    initialize_arrays();
    while (i < options.size())
    {
        if (mode == options[i])
            break;
        else
            i++;
    }

    if (i == 4)
    {
        std::cout << "Please, execute the program with one of this modes -> [DEBUG, INFO, WARNING, ERROR]" << std::endl;
        return;
    }
    (this->*(pointer[i]))();
    return;
};