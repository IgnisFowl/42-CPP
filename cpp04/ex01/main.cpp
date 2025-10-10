/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:54:52 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/10/10 11:22:52 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::cout << "---- Test: Polymorphic Array ----" << std::endl;
    const int N = 6;
    Animal* animals[N];

    // Fill half with Dogs, half with Cats
    for (int i = 0; i < N/2; ++i)
        animals[i] = new Dog();
    for (int i = N/2; i < N; ++i)
        animals[i] = new Cat();

    std::cout << "---- Test: Sounds ----" << std::endl;
    for (int i = 0; i < N; ++i)
        animals[i]->makeSound();

    std::cout << "---- Test: Deep Copy ----" << std::endl;
    Dog amora;
    amora.getBrain()->ideas[0] = "Petisco!!!";
    amora.getBrain()->ideas[42] = "Sonecar";

    Dog lady = amora; // Should invoke deep copy constructor
    lady.getBrain()->ideas[0] = "Uivar muuuuuito";
    lady.getBrain()->ideas[99] = "Sonecar";

    std::cout << "Amora Brain [0]: " << amora.getBrain()->ideas[0] << std::endl; // Chase ball
    std::cout << "Lady  Brain [0]: " << lady.getBrain()->ideas[0] << std::endl;  // Guard house
    std::cout << "Amora Brain [42]: " << amora.getBrain()->ideas[42] << std::endl; // Nap
    std::cout << "Lady  Brain [99]: " << lady.getBrain()->ideas[99] << std::endl;  // Eat

    std::cout << "---- Test: Copy Assignment ----" << std::endl;
    Cat Chica;
    Chica.getBrain()->ideas[5] = "Quero colo!";
    Cat Juan;
    Juan = Chica; // Should invoke deep copy assignment
    Juan.getBrain()->ideas[5] = "Fugir!";

    std::cout << "Chica Brain [5]: " << Chica.getBrain()->ideas[5] << std::endl; // Climb curtain
    std::cout << "Juan Brain [5]: " << Juan.getBrain()->ideas[5] << std::endl; // Scratch sofa


    std::cout << "---- Test: Cleanup ----" << std::endl;
    for (int i = 0; i < N; ++i)
        delete animals[i];

    std::cout << "---- End of Tests ----" << std::endl;
    return 0;
}