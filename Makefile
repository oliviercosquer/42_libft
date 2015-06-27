# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olivier <olivier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:12:20 by ocosquer          #+#    #+#              #
#    Updated: 2015/06/27 20:31:47 by olivier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC_PATH = ./srcs
SRC_FILES = ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memchr.c ft_memmove.c ft_memset.c \
		ft_memcmp.c ft_strlen.c ft_strdup.c \
		ft_strcpy.c ft_strncpy.c ft_strcat.c \
		ft_strncat.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c \
		ft_strcmp.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c \
		ft_strdel.c ft_strclr.c ft_striter.c \
		ft_striteri.c ft_strmap.c ft_strmapi.c \
		ft_strequ.c ft_strnequ.c ft_strsub.c \
		ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putchar.c ft_putstr.c \
		ft_strtrim.c ft_strsplit.c ft_itoa.c \
		ft_putchar.c ft_putstr.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strljoin.c ft_putendl.c
OBJ = $(SRC_FILES)
SRCS = $(patsubst %, $(SRC_PATH)/%, $(SRC_FILES))
all: ${NAME}

${NAME}:
	@echo Linckage
	$(CC) $(FLAGS) -I./includes/ -c $(SRCS)
	@echo compilation de la library
	ar rc $(NAME) $(OBJ:.c=.o)

clean:
	@rm -f $(OBJ:.c=.o)

fclean: clean
	@rm -f ${NAME}

re: fclean all
