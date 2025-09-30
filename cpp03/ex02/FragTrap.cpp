/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:20:52 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/09/30 10:24:53 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << this->name << " constructed\n";
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " destroyed\n";
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests high fives!\n";
}
