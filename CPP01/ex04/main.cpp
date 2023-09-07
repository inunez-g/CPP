/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:58:09 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/07 20:04:50 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int main(int argc, char **argv){
    File file;
    if (argc != 4)
    {
        std::cout << "The number of arguments must be 3. Try again." << std::endl;
        return(1);
    }
    else
    {
        if (file.open_file(argv[1]) == 0) {
            file.save_checkstrings(argv[2], argv[3]);
            file.read_file();
        }
        else
            return (1);
    }
}