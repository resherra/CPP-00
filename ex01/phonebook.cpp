#include "PhoneBook.hpp"
#include <iostream>

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
        std::cout << i << " |" << contact.get_first_name() << " |" << contact.get_last_name() << " |" << contact.get_nickname() << std::endl;
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

int main()
{
    int i = 0;
    PhoneBook book;
    std::string input;    
    
    std::cout << "Enter one of these commands: ADD, SEARCH or EXIT." << std::endl;

    while (getline(std::cin, input))
    {
        if (input == "a")
        {
            book.collect_infos(std::cin);
            book.add(i % 8);
            std::cout << std::endl << "Contact added successfully! Enter one of these commands: ADD, SEARCH or EXIT." << std::endl;
        }
        else if (input == "s")
        {
            book.display();
            std::cout << "enter an entry index: ";
            unsigned int index;
            std::cin >> index;
            if (!std::cin || index > 7)
            {
                //error
            }
            else
                book.search(index);
        }
        else if (input == "EXIT")
            exit(0);
        i++;
    }
}