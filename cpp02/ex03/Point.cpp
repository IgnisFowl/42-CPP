/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:07:12 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/22 10:41:27 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default constructor: initializes x and y to 0
Point::Point() : x(0), y(0) {}

// Constructor: initializes x and y from floats via Fixed constructors
Point::Point(float const xVal, float const yVal) : x(xVal), y(yVal) {}

// Copy constructor: copies x and y from other Point
Point::Point(const Point& other) : x(other.x), y(other.y) {}

// Copy assignment operator:
Point& Point::operator=(const Point& other) {
    (void)other;
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const { return x; }
Fixed Point::getY() const { return y; }