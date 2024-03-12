/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:04:46 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/05 18:04:47 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    uintptr_t SerializedPtr;

    Data    *DeserializedPtr;
    Data    *Ptr = new Data(2);

    SerializedPtr = Serializer::serialize(Ptr);
    DeserializedPtr = Serializer::deserialize(SerializedPtr);

    std::cout << " 1 Ptr with value --> " << *Ptr << " is equal to 2 DeserializedPtr value --> " << *DeserializedPtr << std::endl;
    std::cout << " 1 Ptr with address --> " << Ptr << " is equal to 2 DeserializedPtr address --> " << DeserializedPtr << std::endl;
    delete Ptr;
}