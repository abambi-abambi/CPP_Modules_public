NAME 		= karenFilter

SRCS 		= main.cpp Karen.cpp

OBJ 		=	$(SRCS:.cpp=.o)

CXX 		=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ) Makefile Karen.hpp
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
