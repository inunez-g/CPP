/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:59:44 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 18:47:31 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class File
{
    private:
        std::string myfilename;
        std::string myfindstring;
        std::string myreplacestring;
        std::ifstream myfile;
    public:
        File(void);
        int open_file(std::string filename);
        void    save_checkstrings(std::string find_string, std::string replace_string);
        void    read_file();
        std::string replace_string(std::string string_to_replace);
};

#endif