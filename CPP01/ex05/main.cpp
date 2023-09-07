/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:19:48 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 17:27:55 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//typedef void(*FunctPtr)(void);

int main(int argc, char **argv){
    Harl h;
    //FunctPtr pointer = error;

    if (argc != 2)
    {
        std::cout << "The number of arguments must be 1. Try again." << std::endl;
        return(1);
    }
    else
    {
        h.complain(argv[1]);
        return (0);
    }
}