# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 17:15:49 by maustel           #+#    #+#              #
#    Updated: 2025/02/19 17:15:49 by maustel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m harl built successfully! \033[0m"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "\033[34m cleaning up... \033[0m"
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
