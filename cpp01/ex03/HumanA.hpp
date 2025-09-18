#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& weapon; //reference, always needs to be valid

    public:
        HumanA(const std::string& name, Weapon& weapon);
        void attack() const;
};

#endif