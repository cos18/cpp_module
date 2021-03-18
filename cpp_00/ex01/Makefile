SRCS	= main.cpp PhoneBook.cpp
OBJS	= $(SRCS:.cpp=.o)

NAME	= phonebook
CC		= clang++
CCFLAG	= -Wall -Wextra -Werror
RM		= rm -f

%.o:		%.cpp
			$(CC) $(CCFLAG) -c $< -o $@


$(NAME):	$(OBJS)
			$(CC) $(CCFLAG) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
