/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:20:51 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/09/30 10:25:52 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("Fraggy");
    frag.attack("Krandioso");
    frag.takeDamage(25);
    frag.beRepaired(15);
    frag.highFivesGuys();
    return 0;
}