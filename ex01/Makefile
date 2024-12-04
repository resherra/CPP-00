SRC=phonebook.cpp get_contact_infos.cpp set_contact_infos.cpp
OBJ=$(SRC:.cpp=.o)
HEADERS=Contact.hpp PhoneBook.hpp
NAME=phonebook

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -std=c++98 $(OBJ) -o $(NAME)

$(OBJ):	$(HEADERS)

clean:
	rm $(NAME) $(OBJ)

re: clean all
