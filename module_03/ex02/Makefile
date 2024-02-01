# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 13:43:42 by icheri            #+#    #+#              #
#    Updated: 2022/08/17 19:40:22 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRC = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
HEADER = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp
OBJ = $(SRC:.cpp=.o)

CC				= clang++
RM				= rm -rf
FLAGS			= -Wall -Wextra -Werror -I.

$(NAME)	: $(OBJ) $(HEADER)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

.PHONY	:	all clean fclean re

all		: $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re		: fclean $(NAME)
