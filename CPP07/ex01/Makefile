# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abambi <abambi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 19:21:17 by abambi            #+#    #+#              #
#    Updated: 2021/11/15 17:34:22 by abambi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex01

SRCS 		= 	main.cpp

OBJ 		=	$(SRCS:.cpp=.o)

CXX 		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ) Makefile iter.hpp
			$(CXX) $(CXXFLAGS) $(OBJ) -I. -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
