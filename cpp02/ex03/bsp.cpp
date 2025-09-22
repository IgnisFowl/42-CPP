/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:41:53 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/09/22 10:53:07 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Helper function: calculates signed area of triangle formed by points p1, p2, p3
Fixed area(Point const p1, Point const p2, Point const p3) {
    Fixed part1 = p1.getX() * (p2.getY() - p3.getY());
    Fixed part2 = p2.getX() * (p3.getY() - p1.getY());
    Fixed part3 = p3.getX() * (p1.getY() - p2.getY());
    Fixed sum = part1 + part2 + part3;

    Fixed two(2);
    // Return absolute value of area to ignore sign
    return (sum > Fixed(0)) ? sum / two : (-sum / two);
}

// Determines if point is strictly inside triangle abc
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed totalArea = area(a, b, c);

    Fixed area1 = area(point, a, b);
    Fixed area2 = area(point, b, c);
    Fixed area3 = area(point, c, a);

    // Debug output
    std::cout << "totalArea: " << totalArea << std::endl;
    std::cout << "area1: " << area1 << std::endl;
    std::cout << "area2: " << area2 << std::endl;
    std::cout << "area3: " << area3 << std::endl;

    // On edge test
    if (area1 == Fixed(0) || area2 == Fixed(0) || area3 == Fixed(0))
        return false;

    Fixed sum = area1 + area2 + area3;

    Fixed epsilon(0.0001f);

    if (!sum.almostEqual(totalArea, epsilon.toFloat()))
        return false;

    return true;
}
