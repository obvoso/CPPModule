/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:46:58 by soo               #+#    #+#             */
/*   Updated: 2023/01/03 15:03:10 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
    : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->_value = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "Int constructor called" << std::endl;
    _value = value << _bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
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