/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:20:51 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/09/30 09:56:34 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("Krandioso");
    clap.attack("CPP");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("AnotherDummy");
    clap.attack("NoEnergyByNowDummy");
    clap.takeDamage(100);
    clap.beRepaired(5);
    return 0;
}