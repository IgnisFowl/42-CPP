#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {} //constructor uses member initializer for efficiency

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& type) {
    this->type = type;
}

