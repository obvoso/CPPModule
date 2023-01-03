/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:14:41 by soo               #+#    #+#             */
/*   Updated: 2023/01/02 22:35:43 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _value;
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
    bool operator >(Fixed const &obj) const;
    bool operator <(Fixed const &obj) const;
    bool operator >=(Fixed const &obj) const;
    bool operator <=(Fixed const &obj) const;
    bool operator ==(Fixed const &obj) const;
    bool operator !=(Fixed const &obj) const;
    Fixed operator +(Fixed const &obj) const;
    Fixed operator -(Fixed const &obj) const;
    Fixed operator *(Fixed const &obj) const;
    Fixed operator /(Fixed const &obj) const;
    Fixed &operator ++(void);
    const Fixed operator ++(int);
    Fixed &operator --(void);
    const Fixed operator --(int);
    static Fixed &min(Fixed &obj1, Fixed &obj2);
    static const Fixed &min(Fixed const &obj1, Fixed const &obj2);
    static Fixed &max(Fixed &obj1, Fixed &obj2);
    static const Fixed &max(Fixed const &obj1, Fixed const &obj2);


};
std::ostream& operator<<(std::ostream &out, const Fixed &obj);
#endif