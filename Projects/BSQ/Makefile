# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalvaro- <dalvaro-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/18 16:34:35 by dalvaro-          #+#    #+#              #
#    Updated: 2021/03/18 16:39:45 by dalvaro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq
SRCS	= main.c ft_atoi.c 
OBJS	= ${SRCS:.c=.o}
HEADER	= bsq.h

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