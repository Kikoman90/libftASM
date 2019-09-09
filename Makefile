# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 18:41:24 by fsidler           #+#    #+#              #
#    Updated: 2019/09/09 18:46:46 by fsidler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

AS = nasm
CC = gcc

#LD = ld

ASFLAGS = -f macho64 -MD
CFLAGS = -Wall -Wextra -fsanitize=address,undefined -g -MMD
#-Werror -MMD
#-fsanitize=a

INC_DIR = includes
SRC_DIR = sources
OBJ_DIR = objs

TEST = test/test.c

SRCS =	ft_bzero.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_isascii.s \
		ft_isdigit.s \
		ft_isprint.s \
		ft_tolower.s \
		ft_toupper.s \
		ft_memcpy.s \
		ft_memset.s \
		ft_strcat.s \
		ft_strdup.s \
		ft_strlen.s \

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.s=.o))
DPDS = $(addsuffix .d, $(OBJS))

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
	@ar rcs $(NAME) $^
	#@$(AS) $(ASFLAGS) file.s -o file.o
	#@$(LD) file.o -macosx_version_min 10.8 -lSystem

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	@echo compiling [$@]...
	@mkdir -p $(OBJ_DIR)
	@$(AS) $(ASFLAGS) -o $@ $<

#@printf ${UP}${CUT}

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

-include $(DPDS)
