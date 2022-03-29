# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abambi <abambi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 19:21:17 by abambi            #+#    #+#              #
#    Updated: 2021/11/14 21:11:07 by abambi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex02

SRCS 		= 	main.cpp Base.cpp

OBJ 		=	$(SRCS:.cpp=.o)

CXX 		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ) Makefile Base.hpp General.hpp A.hpp B.hpp C.hpp
			$(CXX) $(CXXFLAGS) $(OBJ) -I. -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
