#include "contact.hpp"
#include <iostream>

static bool isOnlySpaces(const std::string&str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (str[i] != ' ' && str[i] != '\t')
            return (false);
    }
    return (true);
}

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string& fname)
{
    if (fname.empty() || isOnlySpaces(fname))
    {
        std::cerr << "Error: cannot be empty or only spaces!" << std::endl;
        return ;
    }
    firstName = fname;
}

void Contact::setLastName(const std::string& lname)
{
    if (lname.empty() || isOnlySpaces(lname))
    {
        std::cerr << "Error: cannot be empty or only spaces!" << std::endl;
        return ;
    }
    lastName = lname;
}

void Contact::setNickname(const std::string& nname)
{
    if (nname.empty() || isOnlySpaces(nname))
    {
        std::cerr << "Error: cannot be empty or only spaces!" << std::endl;
        return ;
    }
    nickname = nname;
}

void Contact::setPhoneNumber(const std::string& phone)
{
    if (phone.empty() || isOnlySpaces(phone))
    {
        std::cerr << "Error: cannot be empty or only spaces!" << std::endl;
        return ;
    }
    phoneNumber = phone;
}

void Contact::setDarkestSecret(const std::string& secret)
{
    if (secret.empty() || isOnlySpaces(secret))
    {
        std::cerr << "Error: cannot be empty or only spaces!" << std::endl;
        return ;
    }
    darkestSecret = secret;
}

std::string Contact::getFirstName() const {
    return firstName;
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
