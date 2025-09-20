/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:27:25 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:27:27 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
        new (&horde[i]) Zombie(name);
    return horde;
}
