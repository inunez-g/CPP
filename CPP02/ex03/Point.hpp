/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:58:44 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/06 17:31:23 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
    public:
        Point(void);
        Point(float const value1, float const value2); // Duda Double/Int/Float???
        Point(const Point& other);
        Point &operator=(Point const &other);
        ~Point(void);

        Fixed getPosX(void) const;
        Fixed getPosY(void) const;

    private:
        const Fixed x;
        const Fixed y;
};


bool bsp( const Point  a, const Point  b, const Point  c, const Point  point);

#endif