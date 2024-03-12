/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:32:17 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/06 20:32:18 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    char array[4] = {'H', 'O', 'L', 'A'};

    std::cout << "WITH CHARS:" << std::endl;
    iter<char>(array, 4, ::print_func<char>);

    std::cout << "\nWITH INTS:" << std::endl;
    int array2[5] = {1, 11, 111, 1111, 11111};

    iter<int>(array2, 5, ::print_func<int>);

    std::cout << "\nWITH STRINGS:" << std::endl;
    std::string array3[5] = {"holi", "kaixo", "hey", "hsfhfs", "bonjour"};

    iter<std::string>(array3, 5, ::print_func<std::string>);
}