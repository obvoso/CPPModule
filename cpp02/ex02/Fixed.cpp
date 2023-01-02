/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:46:58 by soo               #+#    #+#             */
/*   Updated: 2023/01/02 22:06:08 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
    : _value(0)
{
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    this->_value = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed::Fixed(const int value)
{
    _value = value << _bits;
}

Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _bits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> this->_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}

bool Fixed::operator >(Fixed const &obj) const
{
    return (this->getRawBits() > obj.getRawBits());
}
bool Fixed::operator <(Fixed const &obj) const
{
    return (this->getRawBits() < obj.getRawBits());
}
bool Fixed::operator >=(Fixed const &obj) const
{
    return (this->getRawBits() >= obj.getRawBits());
}
bool Fixed::operator <=(Fixed const &obj) const
{
    return (this->getRawBits() <= obj.getRawBits());
}
bool Fixed::operator ==(Fixed const &obj) const
{
    return (this->getRawBits() == obj.getRawBits());
}
bool Fixed::operator !=(Fixed const &obj) const
{
    return (this->getRawBits() != obj.getRawBits());
}
Fixed Fixed::operator +(Fixed const &obj) const
{
    Fixed ret = this->toFloat() + obj.toFloat();
    return (ret);
}
Fixed Fixed::operator -(Fixed const &obj) const
{
    Fixed ret = this->toFloat() - obj.toFloat();
    return (ret);
}
Fixed Fixed::operator *(Fixed const &obj) const
{
    Fixed ret = this->toFloat() * obj.toFloat();
    return (ret);
}
Fixed Fixed::operator /(Fixed const &obj) const
{
    Fixed ret = this->toFloat() / obj.toFloat();
    return (ret);
}
Fixed &Fixed::operator ++(void)
{
    this->_value++;
    return (*this);
}
const Fixed Fixed::operator ++(int)
{
    const Fixed ret(*this);

    this->_value++;
    return (ret);
}
Fixed &Fixed::operator --(void)
{
    this->_value--;
    return (*this);
}
const Fixed Fixed::operator --(int)
{
    const Fixed ret(*this);
    
    this->_value--;
    return (ret);
}
Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1 > obj2)
        return (obj2);
    return (obj1);
}
const Fixed &Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
    if (obj1 > obj2)
        return (obj2);
    return (obj1);
}
Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj2);
    return (obj1);
}
const Fixed &Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
    if (obj1 < obj2)
        return (obj2);
    return (obj1);
}
