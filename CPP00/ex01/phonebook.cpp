/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:51:36 by inunez-g          #+#    #+#             */
/*   Updated: 2022/12/21 12:58:26 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string action;
    int i = 0;

    while(1)
    {
        std::cout << "-- [ADD] - [SEARCH] - [EXIT] --" << std::endl;
        std::cin >> action;
        if (std::cin.eof())
            break;
        if (!action.compare("ADD"))
        {
            phonebook.add_contact(i);
            if (i == 7)
                i = 0;
            else 
                i++;       
        }
        else if (!action.compare("SEARCH"))
        {
            phonebook.search_contact();
        }
        else if (!action.compare("EXIT"))
            break;
    }
    return (0);
}