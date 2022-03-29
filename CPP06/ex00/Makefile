# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abambi <abambi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 19:21:17 by abambi            #+#    #+#              #
#    Updated: 2021/11/14 21:14:47 by abambi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex00

SRCS 		= 	main.cpp Converter.cpp Parser.cpp

OBJ 		=	$(SRCS:.cpp=.o)

CXX 		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

.PHONY:		all clean fclean re tests

all:		$(NAME)

$(NAME):	$(OBJ) Makefile Converter.hpp
			$(CXX) $(CXXFLAGS) $(OBJ) -I. -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

tests:		$(NAME)
			./ex00 0
			./ex00 42.0f
			./ex00 nan
			./ex00 nanf
			./ex00 '*'
			./ex00 42
			./ex00 42.
			./ex00 42.f
			./ex00 inf
			./ex00 inff
			./ex00 +inf
			./ex00 +inff
			./ex00 -inf
			./ex00 -inff
			./ex00 a
			./ex00 B
			./ex00 "~"
			./ex00 126
			./ex00 test
			./ex00 58
			./ex00 101
