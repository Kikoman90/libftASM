# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 18:41:24 by fsidler           #+#    #+#              #
#    Updated: 2019/09/12 18:19:09 by fsidler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

AS = nasm
CC = gcc

ASFLAGS = -f macho64 -MD
CFLAGS = -Wall -Wextra -Werror
#-fsanitize=address,undefined

INC_DIR = includes
SRC_DIR = sources
OBJ_DIR = objs

TEST = test/test.c

SRCS =	ft_bzero.s \
		ft_atoi.s \
		ft_iclamp.s \
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
		ft_strjoin.s \
		ft_strdup.s \
		ft_strlen.s \
		ft_puts.s \
		ft_cat.s \

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.s=.o))
DPDS = $(addsuffix .d, $(OBJS))

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
	@printf ${UP}${CUT}

## TESTING ##

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
