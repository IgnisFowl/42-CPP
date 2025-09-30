/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:20:51 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/09/30 10:12:36 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Clappy");
    clap.attack("Krandioso");
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << "----" << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("Krandioso");
    scav.takeDamage(50);
    scav.beRepaired(10);
    scav.guardGate();
    return 0;
}