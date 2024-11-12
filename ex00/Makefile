# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recherra <recherra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 13:29:21 by recherra          #+#    #+#              #
#    Updated: 2024/11/12 12:31:58 by recherra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=megaphone.cpp
NAME=megaphone

all: $(NAME)

$(NAME): $(SRC)
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	rm $(NAME)

re: clean all
