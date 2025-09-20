/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:28:01 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:28:02 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
    private:
        std::string type;
    
    public:
        Weapon(const std::string& type); //constructor with initial type
        const std::string& getType() const; //get weapon type (const reference)
        void setType(const std::string& type); //set weapon type
};

#endif