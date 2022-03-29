# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abambi <abambi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 10:13:12 by abambi            #+#    #+#              #
#    Updated: 2021/11/05 22:49:16 by abambi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= ex03

SRCS 		= main.cpp HumanB.cpp HumanA.cpp Weapon.cpp

OBJ 		=	$(SRCS:.cpp=.o)

CXX 		=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ) Makefile HumanB.hpp HumanA.hpp Weapon.hpp
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
