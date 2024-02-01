# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 17:41:18 by rnoriko           #+#    #+#              #
#    Updated: 2022/08/24 23:40:08 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Bureaucrat.cpp \
Form.cpp \
ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp \
Intern.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= Intern

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
				@printf "🪧 $@ object file was created!\n"
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I RobotomyRequestFor.hpp -I Intern.hpp -I Form.hpp -I ShrubberyCreationForm.hpp -I Bureaucrat.hpp -I PresidentialPardonForm.hpp
				@printf "🧶 $@ executable file was created!\n"

clean:
				$(RM) $(OBJS)
				@printf "🧹 Delete $(NAME) object file...\n"

fclean:			clean
				$(RM) $(NAME)
				$(RM) *_shrubbery
				@printf "🧹 $(NAME) executable file was deleted\n"

re:				fclean $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
