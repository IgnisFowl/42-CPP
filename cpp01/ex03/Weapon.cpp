/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:27:58 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:27:59 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {} //constructor uses member initializer for efficiency

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& type) {
    this->type = type;
}

