# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 16:24:27 by maustel           #+#    #+#              #
#    Updated: 2025/02/14 16:24:27 by maustel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m replace built successfully! \033[0m"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "\033[34m cleaning up... \033[0m"
	rm -f $(OBJ)

fclean: clean
	rm -f car.txt.replace haystack.txt.replace pizza.txt.replace
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
