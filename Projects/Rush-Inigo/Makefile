# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/13 18:58:48 by vguttenb          #+#    #+#              #
#    Updated: 2021/03/16 15:55:20 by ialvarez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= rush-02
SRCS	= main.c atoi.c aver.c chopint.c revetoi.c busqueda.c captura.c print.c
OBJS	= ${SRCS:.c=.o}
HEADER	= libreria.h

CC		= cc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${SRCS}
			${CC} -c ${CFLAGS} ${SRCS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:	
			clean
			fclean
			all
			re
