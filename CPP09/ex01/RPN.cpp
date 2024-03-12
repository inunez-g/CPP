/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:11:04 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/12 14:42:48 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stack>

void Calculator(const std::string &input){

        const std::string operators = "+-/*";

        std::stack<int> pile;

        for(std::string::const_iterator ptr=input.cbegin(); ptr != input.end(); ptr++){
            if(*ptr == ' ') //es espacio
                continue;
            else if(std::isdigit(*ptr))//es un numero
            {
                pile.push(*ptr - '0');
            }
            else if(operators.find(*ptr) != std::string::npos) //es + - / *
            {
                if (pile.size() < 2)
                    error();
                int a = pile.top();
                pile.pop();
                int b = pile.top();
                pile.pop();
                switch((*ptr)){
                    case '+':
                        pile.push(sum(b , a));
                        break;
                    case '-':
                         pile.push(sub(b, a));
                         break;
                    case '/':
                         pile.push(divide(b, a));
                         break;
                    case '*':
                         pile.push(multi(b, a));
                         break;
                }
            }
            else 
                error();
        }
        if (pile.size() != 1)
            error();
        else
            std::cout << pile.top() << std::endl;
}
//std::isstringstream()

int  sum(int b, int a){
    return(b+a);
}

int  sub(int b, int a){
    return(b-a);
}

int  multi(int b, int a){
    return(b*a);
}

int  divide(int b, int a){
    if (a == 0)
        error();
    return(b/a);
}

void error(){

    std::cout << "Error" << std::endl;
    exit(1);

};