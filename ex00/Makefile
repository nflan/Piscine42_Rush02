# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nflan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 09:19:20 by nflan             #+#    #+#              #
#    Updated: 2021/08/22 20:19:13 by rmorel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = $(wildcard *.c)

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -g

All : ${NAME}

${NAME} : ${OBJS}
	${CC} -o ${NAME} ${OBJS} -fsanitize=address

clean:
	rm ${OBJS}

fclean: clean
	${RM} ${NAME}

Re: fclean all

.PHONY: all clean fclean re
