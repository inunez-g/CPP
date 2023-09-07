/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:58:26 by inunez-g          #+#    #+#             */
/*   Updated: 2023/09/06 17:49:33 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( const Point  a, const Point  b, const Point  c, const Point  point)
{
    Point d((b.getPosX() - a.getPosX()), (b.getPosY() - a.getPosY()));
    Point e(c.getPosX() - a.getPosX(), c.getPosY() - a.getPosY());
    float w1 = (e.getPosX() * (a.getPosY() - point.getPosY()) + e.getPosY() * (point.getPosX() - a.getPosX())) / (d.getPosX() * e.getPosY() - d.getPosY() * e.getPosX());
    float w2 = (point.getPosY() - a.getPosY() - (w1 * d.getPosY().toFloat())) / e.getPosY().toFloat();

   return ((w1 > 0.0) && (w2 > 0.0) && ((w1 + w2) < 1.0));
}