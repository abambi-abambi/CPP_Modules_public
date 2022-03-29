# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abambi <abambi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 10:13:12 by abambi            #+#    #+#              #
#    Updated: 2021/11/11 21:45:48 by abambi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex01

SRCS 		= 	main.cpp Bureaucrat.cpp Form.cpp

OBJ 		=	$(SRCS:.cpp=.o)

CXX 		=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ) Makefile Bureaucrat.hpp Form.hpp
			$(CXX) $(CXXFLAGS) $(OBJ) -I. -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
