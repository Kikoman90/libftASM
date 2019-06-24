# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsidler <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 18:41:24 by fsidler           #+#    #+#              #
#    Updated: 2019/06/24 18:18:57 by fsidler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

AS = nasm
CC = gcc

#LD = ld

ASFLAGS = -fmacho64
CFLAGS = -Wall -Wextra -Werror
#-fsanitize=address,undefined -g

INC_DIR = includes
SRC_DIR = sources
OBJ_DIR = objs

TEST = test/test.c

SRCS = ft_bzero.s

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.s=.o))

############################## COLORS ##########################################

BY = "\033[33;1m"
BR = "\033[31;1m"
BG = "\033[32;1m"
BB = "\033[34;1m"
BM = "\033[35;1m"
BC = "\033[36;1m"
BW = "\033[37;1m"
Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
M = "\033[35m"
C = "\033[36m"
WR = "\033[0m""\033[31;5m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

## LIBFTASM ##

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $<
	#@$(AS) $(ASFLAGS) file.s -o file.o
	#@$(LD) file.o -macosx_version_min 10.8 -lSystem

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	@echo compiling [$@]...
	@mkdir -p $(OBJ_DIR)
	@$(AS) $(ASFLAGS) -o $@ $<
	@printf ${UP}${CUT}

## TESTING ##

# ctest and asm test?
#

test: all
	@$(CC) $(CFLAGS) -L. -lfts -I $(INC_DIR) $(TEST)


clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f a.out
	@rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re
