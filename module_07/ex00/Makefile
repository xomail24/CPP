# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 20:43:57 by rnoriko           #+#    #+#              #
#    Updated: 2022/08/26 13:26:56 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./SomeFunctions

OBJECTSDIR = objects
HEADERFILE = whatever.hpp


FLAGS = -Wall -Wextra -Werror
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

all: $(NAME)
	@echo "$(RED)██████████████████████ Compiling is DONE ███████████████████████$(RESET)"

$(NAME): $(HEADERFILE) $(OBJS)
	@$(CC) -I $(HEADERFILE) $(OBJS) -o $@

main.o: main.cpp $(HEADERFILE)
	@$(MKDIR) $(dir $@)
	@echo "$(RED)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERFILE) -o $@ -c $<

clean:
	@echo "$(RED)deleting$(RESET): " objects
	@$(RMDIR) $(OBJS)


fclean: clean
	@echo "$(RED)deleting$(RESET): " $(NAME)
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all

.PHONY: all clean fclean re
