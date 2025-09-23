/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:41:53 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/09/23 16:31:12 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Helper function: calculates signed area of triangle formed by points p1, p2, p3
static Fixed area(Point const& a, Point const& b, Point const& c) {
    return (a.getX() * (b.getY() - c.getY()) +
            b.getX() * (c.getY() - a.getY()) +
            c.getX() * (a.getY() - b.getY()));
}

// Determines if point is strictly inside triangle abc
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed d1 = area(point, a, b);
    Fixed d2 = area(point, b, c);
    Fixed d3 = area(point, c, a);

    bool has_neg = (d1 < Fixed(0)) || (d2 < Fixed(0)) || (d3 < Fixed(0));
    bool has_pos = (d1 > Fixed(0)) || (d2 > Fixed(0)) || (d3 > Fixed(0));

    if (!(d1 == Fixed(0)) && !(d2 == Fixed(0)) && !(d3 == Fixed(0))) {
        return !(has_neg && has_pos);
    }
    return false;
}
