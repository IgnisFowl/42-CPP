/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:07:12 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/22 10:37:43 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(); //default constructor
        Point(float const x, float const y); //initialize with floats
        Point(const Point& other); //copy constructor
        Point& operator=(const Point& other); //copy assignment
        ~Point(); //destructor

        Fixed getX() const;
        Fixed getY() const;
};

#endif