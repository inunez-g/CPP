/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:15:19 by inunez-g          #+#    #+#             */
/*   Updated: 2023/08/16 18:15:27 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed& other);
        Fixed &operator=(Fixed const &other);
        ~Fixed(void);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif