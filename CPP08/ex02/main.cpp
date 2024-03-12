/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:52:20 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/07 17:12:14 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> myMutantStack;
    
    myMutantStack.push(1);
    myMutantStack.push(2);
    myMutantStack.push(3);
    myMutantStack.push(4);

    std::cout << "FORWARD ITERATION WITH MODIFICATION" << std::endl;

    MutantStack<int>::iter banderita1 = myMutantStack.begin();
    std::cout << *banderita1 << std::endl;
    banderita1++;
    std::cout << *banderita1 << std::endl;
    *banderita1 = 500;
    std::cout << *banderita1 << std::endl;
    banderita1 = myMutantStack.end();
    std::cout << *banderita1 << std::endl;
    banderita1--;
    std::cout << *banderita1 << std::endl;

    std::cout << "CONST REVERSE ITERATION" << std::endl;

    MutantStack<int>::c_r_iter banderita_const = myMutantStack.rend();
    banderita_const--;
    std::cout << *banderita_const << std::endl;
    banderita_const--;
    std::cout << *banderita_const << std::endl;
    //*banderita_const = 500;
    banderita_const--;
    std::cout << *banderita_const << std::endl;
 

  
    
}