/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:20:51 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/09/30 10:35:24 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamond("Jewel");
    diamond.attack("Krandioso");
    diamond.takeDamage(40);
    diamond.beRepaired(20);
    diamond.whoAmI();
    return 0;
}