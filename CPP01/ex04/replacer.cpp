/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:59:37 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 18:49:21 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

File::File(){

}

int   File::open_file(std::string filename)
{
    myfile.open(filename);
    if (myfile) {
        myfilename = filename;
        return (0);
    }
    else
    {
        std::cout << "The file you sent does not exist or cant be openned" << std::endl;
        return (1);
    }
}

void    File::save_checkstrings(std::string find_string, std::string replace_string)
{
    myfindstring = find_string;
    myreplacestring = replace_string;
}

std::string File::replace_string(std::string string_to_replace)
{
    int i = 0;
    int helper;
    int activation = 0;
    int j = 0;
    std::string final_string = "";
    
    while (string_to_replace[i])
    {
        if (string_to_replace[i] == myfindstring[j])
        {
            if (activation == 0)
            {
                helper = i;
                activation = 1;
            }
            if (j+1 < myfindstring.size() && myfindstring[j+1] != string_to_replace[i+1])
            {
                activation = 0;
                j = 0;
                while (helper <= i)
                {
                    final_string += string_to_replace[helper];
                    helper++;
                }
            }
            else
                j++;
            if (j == myfindstring.size())
            {
                final_string += myreplacestring;
                j = 0;
            }
        }
        else
        {
            final_string += string_to_replace[i];
            j = 0;
        }
        i++;
    }
    return(final_string);
}

void    File::read_file()
{
    std::string mystring;
    std::ofstream    myfinalfile;
    
    myfinalfile.open(myfilename + ".replace");
    while (!myfile.eof()) {
        std::getline(myfile, mystring);
        mystring += "\n";
        if (mystring.find(myfindstring) < mystring.size())
        {
            mystring = replace_string(mystring);
        }
        myfinalfile << mystring; 
    }
    myfile.close();
}