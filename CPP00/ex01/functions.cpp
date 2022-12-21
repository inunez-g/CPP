/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:04:25 by inunez-g          #+#    #+#             */
/*   Updated: 2022/12/21 13:05:59 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
Contact::Contact(void){};
PhoneBook::PhoneBook(void){};
PhoneBook::~PhoneBook(void){};

void Contact::save_contact(std::string input_fn, std::string input_ln, std::string input_nn, std::string input_pn, std::string input_ds)
{
    first_name = input_fn;
    last_name = input_ln;
    nickname = input_nn;
    phone_number = input_pn;
    darkest_secret = input_ds;
    return ;
}

int check_isdigit(std::string phonenumber)
{
    int i = 0;
    while (phonenumber[i])
    {
        if (isdigit(phonenumber[i]))
            i++;
        else
            return (1);
    }
    return(0);
}

std::string check_len(std::string str)
{
    std::string final_str;
    int i = 0;
    
    if (str.length() < 10)
        return (str);
    while (i < 9)
    {
        final_str[i] = str[i];
        i++;
    } 
    final_str.append(".");
    return (final_str);
}

void Contact::print_contact()
{
    std::cout << "* First Name: " << first_name << std::endl;
    std::cout << "* last Name: " << last_name << std::endl;
    std::cout << "* Nickname: " << nickname << std::endl;
    std::cout << "* Phone Number: " << phone_number << std::endl;
    std::cout << "* Darkest Secret: " << darkest_secret << std::endl;
}

void PhoneBook::add_contact(int i)
{
    std::string info[5];
    
    std::cout << "Enter your First Name:" << std::endl;
    std::cin >> info[0];
    std::cout << "Enter your Last Name:" << std::endl;
    std::cin >> info[1];
    std::cout << "Enter your Nickname:" << std::endl;
    std::cin >> info[2];
    std::cout << "Enter your Phone Number:" << std::endl;
    std::cin >> info[3];
    std::cout << "Enter your Darkest Secret:" << std::endl;
    std::cin >> info[4];
    contacts[i].save_contact(info[0], info[1], info[2], info[3], info[4]);
    std::cout << "Your contact has been saved" << std::endl;
    if (n_contacts < 8)
        n_contacts++;
    return ;
}

void PhoneBook::search_contact(void)
{
    int i = 0;

    if (!n_contacts)
    {
        std::cout << "You dont have any contact" << std::endl;
        return ;
    }
    else
    {
        while (i < n_contacts)
        {
            contacts[i].print_contact();
        }
        std::cout << "Select de number of the contact you want: " << std::endl;
        std::cin >> i;
    }
}