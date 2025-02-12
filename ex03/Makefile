# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 12:57:05 by maustel           #+#    #+#              #
#    Updated: 2025/02/12 12:57:05 by maustel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) - o $(NAME)
	@echo "\033[32m zombie built successfully! \033[0m"

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "\033[34m cleaning up... \033[0m"
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
