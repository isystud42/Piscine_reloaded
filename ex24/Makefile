# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 11:28:51 by idsy              #+#    #+#              #
#    Updated: 2019/04/10 18:47:09 by idsy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILES INFOS
NAME = libft.a
FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = ./includes

# COMPILATION
CC = gcc
FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(FILES) -I $(HEADERS)
	ar rc $(NAME) $(0FILES)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all