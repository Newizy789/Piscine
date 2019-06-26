# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-ahma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/23 20:26:51 by oel-ahma          #+#    #+#              #
#    Updated: 2019/06/23 20:29:46 by oel-ahma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = rush-02

FLAGS       = -Wall -Wextra -Werror

SRCS        = ft_strcmp.c rush02.c convert_three.c \
			  ft_putstr.c ft_strlen.c dico.c ft_split.c \
			  fill_tab.c ft_str_is_numeric.c print_number.c

OBJS        = ${SRCS:.c=.o}

RM          = rm -rf

CC          = gcc

.c.o:       ${CC} -c ${FLAGS} $< -o ${<:.c=.o} -I struct_trois.h

${NAME}:    ${OBJS}
				${CC} -o ${NAME} ${OBJS}

all:        ${NAME}

clean:
				${RM} ${OBJS}

fclean:        clean
				${RM} ${NAME}

re:            fclean all

.PHONY:        clean fclean all re
