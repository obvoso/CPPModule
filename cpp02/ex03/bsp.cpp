/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:40:24 by soo               #+#    #+#             */
/*   Updated: 2023/01/03 20:05:35 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool checkPoint(Point const a, Point const b)
{
    if ((a.getX() == b.getX()) && (a.getY() == b.getY()))
        return (false);
    return (true);
}

bool inPoint(Point const a, Point const point)
{
    if (a.getX() == point.getX() && a.getY() == point.getY())
        return (false);
    return (true);
}

bool checkLine(Point const a, Point const b, Point const point)
{
    if (a.getY() > point.getY() != b.getY() > point.getY())
    {
        if (((b.getX() - a.getX()) * ((point.getY() - a.getY()) / (b.getY() - a.getY()))
            + a.getX()) > point.getX())
                return (true);
    }
    return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if (!checkPoint(a, b) || !checkPoint(a, c) || !checkPoint(b, c))
        return (false);
    if (inPoint(a, point) || inPoint(b, point) || inPoint(c, point))
        return (true);
    if (checkLine(a, b, point) || checkLine(a, c, point) || checkLine(b, c, point))
        return (true);
    return (false);
}
