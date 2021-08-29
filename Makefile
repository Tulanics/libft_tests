# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 19:42:56 by tconceic          #+#    #+#              #
#    Updated: 2021/08/28 19:42:56 by tconceic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#source code
SRC = ../libft/ft_isalpha.c \
		../libft/ft_isdigit.c \
		../libft/ft_isalnum.c \
		../libft/ft_isascii.c \
		../libft/ft_isprint.c \
		../libft/ft_strlen.c \

# Compiled Object Format
COF = ${SRC:.c = .o}

all: compile clear

compile:
	gcc -c -Wall -Wextra -Werror ${SRC}

main:
	gcc -c -Wall -Wextra -Werror ${SRC}
	gcc main.c ${COF}
	./a.out

clear:
	rm *.o
	rm a.out

.PHONY: main
