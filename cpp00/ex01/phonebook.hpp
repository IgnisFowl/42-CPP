#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
    int nextIndex;

public:
    PhoneBook();
    ~PhoneBook();

    void addContact(const Contact& newContact);
    void displayContacts() const;
    void displayContact(int index) const;
    int getContactCount() const;
};

#endif