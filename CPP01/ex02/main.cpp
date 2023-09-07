/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:16:40 by inunez-g          #+#    #+#             */
/*   Updated: 2023/07/24 17:50:19 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string    string = "HI THIS IS BRAIN";
    std::string    *stringPTR = &string;
    std::string    &stringREF = string;
    
    std::cout << "memory address to string   : " << &string << std::endl;
    std::cout << "memory address to stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address to stringREF: " << &stringREF << std::endl;

    std::cout << "value of string   : " << string << std::endl;
    std::cout << "value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "value of stringREF: " << stringREF << std::endl;
    return (0);
}