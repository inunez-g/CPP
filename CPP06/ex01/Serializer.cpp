/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:04:49 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 18:04:50 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout << "Serializer Default Constructor called" << std::endl;
}

Serializer::~Serializer(){

	std::cout << "Serializer Destructor called" << std::endl;
}

Serializer::Serializer(Serializer const &other)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	*this = other;
}

Serializer &Serializer::operator=(Serializer const &other)
{
	std::cout << "Serializer Assignation operator called" << std::endl;
	return (*this);
}


uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}