# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 20:26:58 by aaljaber          #+#    #+#              #
#    Updated: 2022/10/02 20:26:59 by aaljaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Megaphone.cpp 

OBJ = ${SRC:.cpp=.o}

NAME = Megaphone

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
