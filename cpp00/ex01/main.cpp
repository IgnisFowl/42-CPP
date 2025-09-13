#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

std::string command;

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

            std::cout << "First name: ";
            std::getline(std::cin, input);
            newContact.setFirstName(input);

            std::cout << "Last name: ";
            std::getline(std::cin, input);
            newContact.setLastName(input);

            std::cout << "Nickname: ";
            std::getline(std::cin, input);
            newContact.setNickname(input);

            std::cout << "Phone number: ";
            std::getline(std::cin, input);
            newContact.setPhoneNumber(input);

            std::cout << "Darkest secret: ";
            std::getline(std::cin, input);
            newContact.setDarkestSecret(input);

            pb.addContact(newContact);
        }
        
        else if (command == "SEARCH") {
            pb.displayContacts();
            std::cout << "Enter index to view details: ";
            std::getline(std::cin, command);
            int idx = atoi(command.c_str());
            pb.displayContact(idx);
        }
    }
    return (0);
}