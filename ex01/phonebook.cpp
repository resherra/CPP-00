#include "PhoneBook.hpp"

int main()
{
    int i = 0;
    PhoneBook book;
    std::string input;
    std::string prompt = "Enter one of these commands: ADD, SEARCH or EXIT.";
    
    std::cout << prompt << std::endl;

    while (std::getline(std::cin, input))
    {
        try
        {
            if (input == "a")
            {
                book.collect_infos(std::cin);
                book.add(i % 8);
                std::cout << std::endl << "Contact added successfully! " + prompt << std::endl;
                i++;
            }
            else if (input == "s")
            {
                book.display();
                std::cout << "Enter an entry index: ";
                unsigned int index;
                std::cin >> index;
                if (!std::cin || index > 7)
                {
                    if (!std::cin)
                        exit(1);
                    else
                        std::cout << "The index you provided is out of range! " + prompt << std::endl;
                }
                else
                {
                    std::cout << "Here's the contact infos related to this index: " << std::endl;
                    book.search(index);
                }
            }
            else if (input == "EXIT")
                exit(0);
        }
        catch(const std::exception&)
        {
            std::cout << "A saved contact can’t have empty field " + prompt << std::endl;
        }
    }
}