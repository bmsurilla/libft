# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/30 20:33:41 by bsurilla          #+#    #+#              #
#    Updated: 2026/05/09 22:00:54 by bsurilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_memset.c \
	  ft_strncmp.c \
	  ft_toupper.c \
	  ft_memcmp.c \
	  ft_memchr.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strdup.c \
	  ft_strnstr.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_memcpy.c \
	  ft_memmove.c\
	  ft_calloc.c \
	  ft_substr.c \
	  ft_strjoin.c \

OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar	rcs	$(NAME)	$(OBJ)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBLJ)

fclean:
	rm -f $(NAME)

re: fclean all

