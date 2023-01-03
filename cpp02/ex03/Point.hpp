/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:37:52 by soo               #+#    #+#             */
/*   Updated: 2023/01/03 15:36:23 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    Point(float x, float y);
    Point(const Point& obj);
    Point& operator=(const Point& obj);
    ~Point();
    Fixed getX(void) const;
    Fixed getY(void) const;
};
 bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
