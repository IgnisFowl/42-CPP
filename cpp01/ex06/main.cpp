#include "Harl.hpp"
#include <iostream>

int getLevelIndex(const std::string& level) {
    if (level == "DEBUG")
        return 0;
    else if (level == "INFO")
        return 1;
    else if (level == "WARNING")
        return 2;
    else if (level == "ERROR")
        return 3;
    return -1;
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