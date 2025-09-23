/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:07:12 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/23 16:39:55 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

/*
int main(void) {
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);

    Point inside(1.0f, 1.0f);
    Point outside(5.0f, 5.0f);
    Point edge(0.0f, 0.0f);

    std::cout << std::boolalpha;
    std::cout << "Inside point: " << bsp(a, b, c, inside) << std::endl;   // expect true
    std::cout << "Outside point: " << bsp(a, b, c, outside) << std::endl; // expect false
    std::cout << "Edge point: " << bsp(a, b, c, edge) << std::endl;       // expect false
    return 0;
}*/

int main() {
    Point A(0, 0);
    Point B(4, 0);
    Point C(2, 4);

    std::cout << "Triangle vertices: A(0,0), B(4,0), C(2,4)\n\n";

    Point tests[] = {
        Point(2, 2),   // inside
        Point(-1, 1),  // outside left
        Point(2, 5),   // outside above
        Point(2, 0),   // on edge AB
        Point(3, 2),   // on edge BC
        Point(1, 2),   // on edge CA
        A,             // vertex A
        B,             // vertex B
        C,             // vertex C
        Point(2.5,1.5) // near edge inside
    };

    const char* descriptions[] = {
        "Inside point",
        "Outside point to the left",
        "Outside point above",
        "On edge AB",
        "On edge BC",
        "On edge CA",
        "On vertex A",
        "On vertex B",
        "On vertex C",
        "Near edge inside"
    };

    bool expected[] = { true, false, false, false, false, false, false, false, false, true };

    for (int i = 0; i < 10; ++i) {
        std::cout << descriptions[i] << " " << "(" << tests[i].getX().toFloat() << ", "
                  << tests[i].getY().toFloat() << ")"
                  << " -> Expected: " << (expected[i] ? "true" : "false") << std::endl;
        std::cout << "Result: " << (bsp(A, B, C, tests[i]) ? "true" : "false") << std::endl;
        std::cout << "----------------------------" << std::endl;
    }

    return 0;
}