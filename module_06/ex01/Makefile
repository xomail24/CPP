# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 16:37:50 by rnoriko           #+#    #+#              #
#    Updated: 2022/08/25 18:23:13 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./Serialization

OBJECTSDIR = objects
HEADERS_FOLDER = headers

FLAGS = -Wall -Wextra -Werror -std=c++98
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

SRC_FILES = main.cpp

OBJS := $(SRC_FILES:.cpp=.o)

CC = clang++

RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p
MAKE = make -C
ECHO = /bin/echo
ERRIGNORE = 2>/dev/null

all:$(NAME)
	@echo "$(BLUE)██████████████████████ Compiling is DONE ███████████████████████$(RESET)"

$(NAME): $(OBJS)
	@$(CC) -I $(HEADERS_FOLDER) $(OBJS) -o $@

main.o: main.cpp
	@$(MKDIR) $(dir $@)
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@echo "$(RED)deleting$(RESET): " objects
	@$(RMDIR) $(OBJS)


fclean: clean
	@echo "$(RED)deleting$(RESET): " $(NAME)
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all

.PHONY:			all clean fclean re
