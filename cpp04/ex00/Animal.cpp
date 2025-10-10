/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:26:34 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/10/08 09:47:17 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
    std::cout << "[Animal] created: a mysterious creature appears." << std::endl; 
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "[Animal] copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "[Animal] copy assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "[Animal] destroyed: the last whispers fade..." << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "[Animal] ... (silence)." << std::endl;
}

