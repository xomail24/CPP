# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 17:21:09 by icheri            #+#    #+#              #
#    Updated: 2022/05/15 22:34:58 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

$(NAME)	: $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

.PHONY	:	all clean fclean re

all		: $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re		: fclean $(NAME)



