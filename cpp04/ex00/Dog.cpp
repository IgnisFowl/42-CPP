/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:47:55 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/10/08 09:53:27 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "[Dog] default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "[Dog] copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "[Dog] copy assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "[Dog] destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "[Dog] woof! woof!" << std::endl;
}
