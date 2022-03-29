NAME 	= 	megaphone

SRC 	= 	megaphone.cpp

OBJS 	= 	$(SRC:.cpp=.o)

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX		=	clang++

RM 		= 	rm -f

$(NAME):	$(OBJS) Makefile
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

PHONY:		all clean fclean re

all:		$(NAME)

clean:
			${RM} $(OBJS)

fclean:		clean
			${RM} $(NAME)

re:			fclean all
