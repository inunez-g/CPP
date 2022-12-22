/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:04:25 by inunez-g          #+#    #+#             */
/*   Updated: 2022/12/21 19:53:07 by inunez-g         ###   ########.fr       */
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
    
    if (str.length() <= 10)
        return (str);
    final_str = str.substr(0, 9);
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
    std::getline(std::cin >> std::ws, info[0]);
    std::cout << "Enter your Last Name:" << std::endl;
    std::getline(std::cin >> std::ws, info[1]);
    std::cout << "Enter your Nickname:" << std::endl;
    std::getline(std::cin >> std::ws, info[2]);
    std::cout << "Enter your Phone Number:" << std::endl;
    std::getline(std::cin >> std::ws, info[3]);
    while (check_isdigit(info[3]))
    {
        std::cout << "The phone number must only have numbers. Type it again!" << std::endl;
        std::getline(std::cin >> std::ws, info[3]);
    }
    std::cout << "Enter your Darkest Secret:" << std::endl;
    std::getline(std::cin >> std::ws, info[4]);
    contacts[i].save_contact(info[0], info[1], info[2], info[3], info[4]);
    std::cout << "Your contact has been saved" << std::endl;
    if (n_contacts < 8)
        n_contacts++;
    return ;
}

void Contact::get_contact_list(int i)
{
    std::cout << "[" << i << "]" << "|";
    std::cout << std::setw(10) << check_len(first_name) << "|";
    std::cout << std::setw(10) << check_len(last_name) << "|";
    std::cout << std::setw(10) << check_len(nickname) << "|";
    std::cout << std::endl;
    return ;
}

void PhoneBook::search_contact(void)
{
    int i = 0;
    std::string number;

    if (!n_contacts)
    {
        std::cout << "You dont have any contact" << std::endl;
        return ;
    }
    else
    {
        while (i < n_contacts)
        {
            contacts[i].get_contact_list(i);
            i++;
        }
        std::cout << "Select the number of the contact you want: " << std::endl;
        std::cin >> number;
        while (number.size() > 1 || !std::isdigit(number[0]))
        {
            std::cout << "Not an option. Try again!" << std::endl;
            std::cin >> number;
        }
        i = atoi(number.c_str());
        if (i >=  n_contacts)
        {
            std::cout << "Sorry, that number of contact does not exist" << std::endl;
            return ;   
        }
        contacts[i].print_contact();
    }
}