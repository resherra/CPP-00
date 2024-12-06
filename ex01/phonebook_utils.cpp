#include "PhoneBook.hpp"
#include <iomanip>
#include <ios>


void    PhoneBook::add(int i)
{
    contacts[i] = tmp;
}

void    PhoneBook::collect_infos(std::istream& in)
{
    tmp.set_first_name(std::cin);
    tmp.set_last_name(std::cin);
    tmp.set_nickname(std::cin);
    tmp.set_phone_number(std::cin);
    tmp.set_secret(std::cin);
}

void    PhoneBook::display()
{
    int i = 0;
    while (i < 8)
    {   
        Contact contact = contacts[i];
        if (!contact.get_first_name().size())
            break;
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << contact.get_first_name() << "|";
        std::cout << std::setw(10) <<  contact.get_last_name() << "|";
        std::cout << std::setw(10) << contact.get_nickname() << std::endl;
        i++;
    }
}

void    PhoneBook::search(unsigned int i)
{
    std::cout << "First name: " + contacts[i].get_first_name() << std::endl;
    std::cout << "Last name: " + contacts[i].get_last_name() << std::endl;
    std::cout << "Nickname: " + contacts[i].get_nickname() << std::endl;
    std::cout << "Phone number: " + contacts[i].get_phone_number() << std::endl;
    std::cout << "Secret: " + contacts[i].get_secret() << std::endl;
}  