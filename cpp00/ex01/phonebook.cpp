#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : contactCount(0), nextIndex(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(const Contact& newContact) {
    contacts[nextIndex] = newContact;
    nextIndex = (nextIndex + 1) % 8;
    if (contactCount < 8)
        contactCount++;
}

static std::string formatField(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::displayContacts() const {
    std::cout << "     Index|First Name| Last Name| Nickname " << std::endl;
    for (int i = 0; i < contactCount; ++i) {
        std::cout << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << formatField(contacts[i].getFirstName());
        std::cout << "|" << std::setw(10) << formatField(contacts[i].getLastName());
        std::cout << "|" << std::setw(10) << formatField(contacts[i].getNickname());
        std::cout << std::endl;
    }
}

void PhoneBook::displayContact(int index) const{
    if (index < 0 || index >= contactCount) {
        std::cerr << "Invalid index!" << std::endl;
        return;
    }
    else if (index >= 0 && index <= contactCount) {
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Numbers: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Tarkest secret: " << contacts[index].getDarkestSecret() << std::endl;
    }
}

int PhoneBook::getContactCount() const {
    return contactCount;
}