/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:11:07 by inunez-g          #+#    #+#             */
/*   Updated: 2024/03/12 13:11:08 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stdlib.h>
#include <iostream>


int sum(int b, int a);
int sub(int b, int a);
int multi(int b, int a);
int divide(int b, int a);
void error();

void Calculator(const std::string &input);


#endif