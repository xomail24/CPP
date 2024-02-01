# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 19:34:16 by icheri            #+#    #+#              #
#    Updated: 2022/07/06 19:19:48 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = main.cpp Harl.cpp
HEADER = Harl.hpp
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
