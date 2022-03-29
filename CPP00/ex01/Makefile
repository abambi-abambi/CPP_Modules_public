NAME	=	phonebook

SRCS	=	main.cpp Phonebook.cpp Contacts.cpp

OBJS 	= 	$(SRCS:.cpp=.o)

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX		=	clang++

RM 		= 	rm -f

$(NAME):	$(OBJS) Makefile Phonebook.hpp Contacts.hpp
			$(CXX) $(CXXFLAGS) $(OBJS) -I. -o $(NAME)

PHONY:		all clean fclean re

all:		$(NAME)

clean:
			${RM} $(OBJS)

fclean:		clean
			${RM} $(NAME)

re:			fclean all
