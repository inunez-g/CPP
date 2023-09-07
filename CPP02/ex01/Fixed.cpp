/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:30:59 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/16 19:06:59 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

Fixed &Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(other.getRawBits());
    return *this;
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const
{
    return (fixed_point);
};

void Fixed::setRawBits( int const raw )
{
    fixed_point = raw;
};

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(value * (1<< fractional_bits));
};

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(value * (1<< fractional_bits)));
};

float Fixed::toFloat( void ) const
{
    return (roundf(getRawBits()) / (1<< fractional_bits));
};

int Fixed::toInt( void ) const
{
    return (fixed_point / (1<< fractional_bits));
}