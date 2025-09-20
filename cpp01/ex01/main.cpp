/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:27:10 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:27:13 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int hordeSize = 5;
    Zombie* horde = zombieHorde(hordeSize, "Zippy");

    for (int i = 0; i < hordeSize; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}