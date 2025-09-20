/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:27:55 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:27:56 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    {
        Weapon sword("katana");
        HumanA kenzo("Kenzo", sword);
        kenzo.attack();
        sword.setType("longsword");
        kenzo.attack();
    }
    {
        Weapon sword("claymore");
        HumanB musashi("Musashi");
        musashi.attack();
        musashi.setWeapon(sword);
        musashi.attack();
        sword.setType("katana");
        musashi.attack();
    }

    return 0;
}