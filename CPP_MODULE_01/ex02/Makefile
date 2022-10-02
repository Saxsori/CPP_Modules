# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 22:00:30 by aaljaber          #+#    #+#              #
#    Updated: 2022/10/02 22:00:52 by aaljaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

NAME = HI_THIS_IS_BRAIN

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