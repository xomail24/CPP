# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 14:01:58 by icheri            #+#    #+#              #
#    Updated: 2022/05/24 13:52:07 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = Contact.cpp main.cpp PhoneBook.cpp
HEADER = Contact.hpp PhoneBook.hpp
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
