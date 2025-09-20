/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:27:34 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:27:35 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Address of brain: " << &brain << std::endl;
    std::cout << "Address of stringPTR: " << &stringPTR << std::endl;
    //std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of brain: " << brain << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return 0;
}
