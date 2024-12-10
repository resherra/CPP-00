SRC = tests.cpp account.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Account.hpp
NAME = account

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
