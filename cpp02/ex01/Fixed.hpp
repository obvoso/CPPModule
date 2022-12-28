/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:14:41 by soo               #+#    #+#             */
/*   Updated: 2022/12/28 22:16:27 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _int;
    float   _float;
    const static int    _bits = 8;

public:
    Fixed(void);
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    ~Fixed(void);
    int getRawBits(void) const;
    void    setRawBits(int const raw);
    Fixed(const int value);
    Fixed(const float value);
    float toFloat(void) const;
    int toInt(void) const;
    float ToFixed(int);
    float ToFixed(float);
};

#endif