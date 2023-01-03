/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:48:26 by soo               #+#    #+#             */
/*   Updated: 2023/01/03 15:40:40 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
    :_x(0), _y(0)
{
}
Point::Point(float x, float y)
    :_x(x), _y(y)
{
}

Point::Point(const Point& obj) 
{
    *this = obj;
}

Point& Point::operator=(const Point& obj) 
{
    if (this != &obj)
    {
        const_cast<Fixed&>(this->_x) = obj.getX();
        const_cast<Fixed&>(this->_y) = obj.getY();
    }
    return (*this);
}

Point::~Point() 
{
}

Fixed Point::getX(void) const
{
    return (_x);
}

Fixed Point::getY(void) const
{
    return (_y);
}
