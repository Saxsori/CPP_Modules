# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 22:19:56 by aaljaber          #+#    #+#              #
#    Updated: 2022/10/20 07:22:51 by aaljaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Aaaaand...OPEN!

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