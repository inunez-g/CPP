/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:10:59 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/12 13:11:00 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv){

    if (argc == 2)
    {   
        Calculator(argv[1]);
    }
    else
        std::cout << "Error. Invalid arguments" << std::endl;
}