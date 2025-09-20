#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

std::string command;

static bool isOnlySpaces(const std::string&str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (str[i] != ' ' && str[i] != '\t')
            return (false);
    }
    return (true);
}

int main() {
    PhoneBook pb;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "EXIT")
            break;

        if (command == "ADD") {
            Contact newContact;
            std::string input;

            while (true) {
                std::cout << "First name: ";
                std::getline(std::cin, input);
                if (!input.empty() && !isOnlySpaces(input)) {
                    newContact.setFirstName(input);
                    break;
                }
                std::cout << "Cannot be empty or only spaces." << std::endl;
            }

            while (true) {
                std::cout << "Last name: ";
                std::getline(std::cin, input);
                if (!input.empty() && !isOnlySpaces(input)) {
                    newContact.setLastName(input);
                    break;
                }
                std::cout << "Cannot be empty or only spaces." << std::endl;
            }

            while (true) {
                std::cout << "Nickname: ";
                std::getline(std::cin, input);
                if (!input.empty() && !isOnlySpaces(input)) {
                    newContact.setNickname(input);
                    break;
                }
                std::cout << "Cannot be empty or only spaces." << std::endl;
            }

            while (true) {
            std::cout << "Phone number: ";
                std::getline(std::cin, input);
                if (!input.empty() && !isOnlySpaces(input)) {
                    newContact.setPhoneNumber(input);
                    break;
                }
                std::cout << "Cannot be empty or only spaces." << std::endl;
            }

            while (true) {
            std::cout << "Darkest secret: ";
                std::getline(std::cin, input);
                if (!input.empty() && !isOnlySpaces(input)) {
                    newContact.setDarkestSecret(input);
                    break;
                }
                std::cout << "Cannot be empty or only spaces." << std::endl;
            }

            pb.addContact(newContact);
        }
        
        else if (command == "SEARCH") {
            pb.displayContacts();
            std::cout << "Enter index to view details: ";
            std::getline(std::cin, command);
            if (command >= "0" && command <= "7"){
                int idx = atoi(command.c_str());
                pb.displayContact(idx);
            }
            else {
                std::cout << "Invalid index!" << std::endl;
            }
        }
    }
    return (0);
}
