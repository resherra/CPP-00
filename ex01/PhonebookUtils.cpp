#include "PhoneBook.hpp"
#include <iomanip>

void    PhoneBook::add(int i)
{
    contacts[i] = tmp;
}

void    PhoneBook::collect_infos(std::istream& in)
{
    tmp.set_first_name(in);
    tmp.set_last_name(in);
    tmp.set_nickname(in);
    tmp.set_phone_number(in);
    tmp.set_secret(in);
}

std::string trunc(std::string str)
{
    if (str.size() > 10)
        return str.substr(0, 9) + '.'; 
    return str;
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
        std::cout << std::setw(10) << trunc(contact.get_first_name()) << "|";
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