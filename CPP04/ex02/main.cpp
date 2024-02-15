/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:25:50 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/05 10:32:30 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    int i = -1;
    int nAnimals = 4;
    const Animal    *animals[nAnimals];
    
    while (i++ < nAnimals)
    {
        if (i%2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    i = -1;
    while (i++ < nAnimals)
        delete animals[i];
    std::cout << "\n----- AQUI COMIENZA DEEP COPY -----\n" << std::endl;
    const Animal *my_dog = new Dog(); //Sustituir Dog por Animal y ver como da error
    std::cout << std::endl;
    Dog a;
    std::cout << std::endl;
    Dog b(a);

    std::cout << "\nLa idea nº1 del perro A es: " << a.getDogIdea(1) << std::endl;
	std::cout << "La idea nº1 del perro B es: " << b.getDogIdea(1) << std::endl;
    // Cambiamos esa idea del perro A por una nueva
    a.setDogIdea(1, "ESTA ES MI NUEVA IDEA");
    std::cout << "La nueva idea ha sido introducida" << std::endl;
    b = a;
    std::cout << "\nMostramos las ideas de los perros:" << std::endl;
    std::cout << a.getDogIdea(1) << std::endl;
    std::cout << b.getDogIdea(1) << "\n" << std::endl;
    delete my_dog;
    return 0;
}