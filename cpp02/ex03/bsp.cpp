/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soo <soo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:40:24 by soo               #+#    #+#             */
/*   Updated: 2023/01/03 15:47:43 by soo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    bool ret = false;

    if (a.getX() == point.getX() && a.getY() == point.getY())
        return (true);
    if (b.getX() == point.getX() && b.getY() == point.getY())
        return (true);
    if (c.getX() == point.getX() && c.getY() == point.getY())
        return (true);
    if (a.getY() > point.getY() != b.getY() > point.getY())
    {
        if (((b.getX() - a.getX()) * ((point.getY() - a.getY()) / (b.getY() - a.getY()))
            + a.getX()) >= point.getX())
            {
                if (ret)
                    ret = false;
                else
                    ret = true;
            }
    }
    if (a.getY() > point.getY() != c.getY() > point.getY())
    {
        if (((c.getX() - a.getX()) * ((point.getY() - a.getY()) / (c.getY() - a.getY()))
            + a.getX()) >= point.getX())
            {
                if (ret)
                    ret = false;
                else
                    ret = true;
            }
    }
     if (b.getY() > point.getY() != c.getY() > point.getY())
    {
        if (((c.getX() - b.getX()) * ((point.getY() - b.getY()) / (c.getY() - b.getY()))
            + b.getX()) >= point.getX())
            {
                if (ret)
                    ret = false;
                else
                    ret = true;
            }
    }
    return (ret);
}
