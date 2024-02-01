# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 17:21:44 by rnoriko           #+#    #+#              #
#    Updated: 2022/08/24 23:46:13 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Bureaucrat.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I.

NAME			= Bureaucrat

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp
				@printf "🪧 $@ object file was created!\n"
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I Bureaucrat.hpp
				@printf "🧶 $@ executable file was created!\n"

clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object file...\n"


fclean:			clean
				$(RM) $(NAME)
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

.PHONY:			all clean fclean re
