# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 12:24:15 by aaljaber          #+#    #+#              #
#    Updated: 2022/10/20 07:22:12 by aaljaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp HumanA.cpp Weapon.cpp HumanB.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Unnecessary_violence

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