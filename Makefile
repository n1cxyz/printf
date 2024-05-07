# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 15:23:23 by dasal             #+#    #+#              #
#    Updated: 2024/05/06 15:23:25 by dasal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}
LIB = ar rcs
RM = rm -f

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
${NAME}: ${OBJS}
	${LIB} ${NAME} ${OBJS}
all: ${NAME}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all

.PHONY : all clean fclean re