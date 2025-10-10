/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:54:52 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/10/08 10:01:11 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* amora = new Dog();
    const Animal* chica = new Cat();

    std::cout << amora->getType() << std::endl;
    std::cout << chica->getType() << std::endl;
    std::cout << meta->getType() << std::endl;

    amora->makeSound();
    chica->makeSound();
    meta->makeSound();

    delete meta;
    delete amora;
    delete chica;
    return 0;
}