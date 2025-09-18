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