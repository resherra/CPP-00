SRC = phonebook.cpp get_contact_infos.cpp set_contact_infos.cpp phonebook_utils.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Contact.hpp PhoneBook.hpp
NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ -Wall -Wextra -std=c++98 -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
