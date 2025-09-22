/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:07:12 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/22 10:53:58 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

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
}