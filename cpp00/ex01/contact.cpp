#include "contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string& firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(const std::string& lname)
{
    lastName = lname;
}

void Contact::setNickname(const std::string& nname)
{
    nickname = nname;
}

void Contact::setPhoneNumber(const std::string& phone)
{
    phoneNumber = phone;
}

void Contact::setDarkestSecret(const std::string& secret)
{
    darkestSecret = secret;
}

std::string Contact::getFirstName() const {
    return this->firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}
