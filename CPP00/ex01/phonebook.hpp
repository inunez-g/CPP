/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:45:24 by inunez-g          #+#    #+#             */
/*   Updated: 2022/12/21 12:48:56 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include <iostream>

class Contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact(void);
        void save_contact(std::string input_fn, std::string input_ln, std::string input_nn, std::string input_pn, std::string input_ds);
        void print_contact(void);
};

class PhoneBook
{
    private:
        int n_contacts;
        Contact contacts[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void search_contact(void);
        void add_contact(int i);
};

#endif