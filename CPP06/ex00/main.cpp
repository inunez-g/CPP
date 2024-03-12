/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:04:33 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 18:04:33 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char **argv ) {
    if (argc == 2)
    {
    
        ScalarConverter::convert(argv[1]);
    }
    else
    {
        std::cout << "Bad arguments." << std::endl;
        return 1;
    }
    return 0;
}