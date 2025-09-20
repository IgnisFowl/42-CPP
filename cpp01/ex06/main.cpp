/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:28:36 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 10:34:17 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

enum Level {
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3,
    INVALID = -1
};

Level getLevelIndex(const std::string& level) {
    if (level == "DEBUG")
        return DEBUG;
    else if (level == "INFO")
        return INFO;
    else if (level == "WARNING")
        return WARNING;
    else if (level == "ERROR")
        return ERROR;
    return INVALID;
}

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    Harl harl;
    int level = getLevelIndex(argv[1]);

    switch (level) {
        case 0:
            harl.complain("DEBUG");
            // fallthrough
        case 1:
            harl.complain("INFO");
            // fallthrough
        case 2:
            harl.complain("WARNING");
            // fallthrough
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}