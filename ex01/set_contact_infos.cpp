#include "PhoneBook.hpp"

void    Contact::set_first_name(std::istream& in)
{
    std::cout << "First name: ";
    getline(in, first_name);
}

void Contact::set_last_name(std::istream& in)
{
    std::cout << "Last name: ";
    getline(in, last_name);
}

void Contact::set_nickname(std::istream& in)
{
    std::cout << "Nickname: ";
    getline(in, nickname);
}

void Contact::set_phone_number(std::istream& in)
{
    std::cout << "Phone number: ";
    getline(in, phone_number);
}

void Contact::set_secret(std::istream& in)
{
    std::cout << "Secret: ";
    getline(in, secret);
}
