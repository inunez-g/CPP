/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:25:50 by inunez-g          #+#    #+#             */
/*   Updated: 2023/12/04 13:55:19 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << i2->getType() << " " << std::endl;

    std::cout << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    i2->makeSound();
    meta->makeSound();
    meta2->makeSound();
    std::cout << std::endl;

    delete meta;//should not create a leak
    delete j;
    delete i;
    
    std::cout << std::endl;
    
    delete meta2;
    delete i2;
    return 0;
}