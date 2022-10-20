# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 01:40:05 by aaljaber          #+#    #+#              #
#    Updated: 2022/10/20 07:23:13 by aaljaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Polymorphism

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