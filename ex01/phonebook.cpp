#include "PhoneBook.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::istream;


void    Contact::set_first_name(std::istream& in)
{
    getline(in, first_name);
}
void Contact::set_last_name(istream& in)
{
    getline(in, last_name);
}
void Contact::set_nickname(istream& in)
{
    getline(in, nickname);
}

void Contact::set_phone_number(istream& in)
{
    getline(in, phone_number);
}

void Contact::set_secret(istream& in)
{
    getline(in, secret);
}
    




int main()
{
    int i = 0;
    PhoneBook book;
    
    std::string input;
    while (getline(std::cin, input))
    {
        if (input == "a")
        {
            book.contacts[i].set_first_name(cin);
            book.contacts[i].set_last_name(cin);
            book.contacts[i].set_nickname(cin);
            book.contacts[i].set_phone_number(cin);
            book.contacts[i].set_secret(cin);
        }
        i++;
    }

    i = 0;
    cout << "first name: " << book.contacts[i].get_first_name() << endl;
    cout << "last name: " << book.contacts[i].get_last_name() << endl;
}