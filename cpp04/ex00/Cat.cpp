/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:47:55 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/10/08 09:54:39 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "[Cat] default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "[Cat] copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "[Cat] copy assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "[Cat] destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "[Cat] meow... meow!" << std::endl;
}
