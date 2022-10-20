# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 03:18:39 by aaljaber          #+#    #+#              #
#    Updated: 2022/10/20 07:22:31 by aaljaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp

OBJ = ${SRC:.cpp=.o}

NAME = My_First_Class_in_Orthodox_Canonical_Form

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
	
RM = rm -rf

all : ${NAME}

${NAME} : ${OBJ}
		${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean : 
		${RM} ${OBJ}

fclean : clean
		${RM} ${NAME}
 
re : fclean all