/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:32:15 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/06 20:32:16 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T>
void iter(T *array, int len, T f(T &elem))
{
    int i = 0;

    while (i < len)
    {
        array[i] = f(array[i]);
        i++;
    }
}

template< typename T>
T print_func(T &character){

	std::cout << character << std::endl;
    return character;
}

#endif