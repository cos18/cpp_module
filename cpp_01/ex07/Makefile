SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)

NAME	= replace
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

test:		$(NAME)
			./$(NAME) Makefile CC GCC
			./$(NAME) main.cpp std wrong!

.PHONY:		all clean fclean re
