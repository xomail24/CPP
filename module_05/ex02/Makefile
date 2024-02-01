# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 17:28:44 by rnoriko           #+#    #+#              #
#    Updated: 2022/08/24 23:39:25 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Bureaucrat.cpp \
Form.cpp \
ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= RealWorldForms

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
				@printf "🪧 $@ object file was created!\n"
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I RobotomyRequestFor.hpp -I Form.hpp -I ShrubberyCreationForm.hpp -I Bureaucrat.hpp -I PresidentialPardonForm.hpp
				@printf "🧶 $@ executable file was created!\n"

clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object file...\n"

fclean:			clean
				$(RM) $(NAME)
				$(RM) *_shrubbery
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

.PHONY:			all clean fclean re
