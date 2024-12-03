#ifndef phonebook_h
#define phonebook_h

#include "Contact.hpp"

class PhoneBook {
    public:
        void    add();
        void    search();
        Contact contacts[8];
};

#endif