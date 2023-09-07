/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:56:19 by inunez-g          #+#    #+#             */
/*   Updated: 2022/12/26 18:40:42 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    char character;
    int i;
    int j;
    char *str;

    i = 1;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    while (argv[i])
    {
        j = 0;
        str = argv[i];
        while (str[j])
        {
            character = std::toupper(str[j]);
            std::cout << character;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}