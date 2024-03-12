/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:27:07 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/12 11:27:20 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange btc;

    if (argc == 2)
    {
        btc.read_files(argv[1]);
    }
    else
        return(1);
    return 0;
}

