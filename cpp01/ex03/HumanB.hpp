/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:27:51 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:27:52 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon; //pointer, can be null

    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif