# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 17:14:21 by aaljaber          #+#    #+#              #
#    Updated: 2022/10/05 00:51:39 by aaljaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ErrMng.cpp StrReplace.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Sed_is_for_losers

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

all : ${NAME}

${NAME} : ${OBJ}
		${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean : 
		${RM} ${OBJ}

fclean : clean
		${RM} ${NAME}
 
re : fclean all