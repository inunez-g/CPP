/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:25:50 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/14 10:21:54 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    int i = -1;
    int nAnimals = 40;
    const Animal    *animals[nAnimals];
    
    while (i++ < nAnimals)
    {
        if (i%2 == 0)
            animals[i] = new Dog;
        else
            animals[i] = new Cat;
    }
    i = -1;
    while (i++ < nAnimals)
        delete animals[i];
    return 0;
}