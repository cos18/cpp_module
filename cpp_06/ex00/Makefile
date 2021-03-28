SRCS	= main.cpp ResultValue.cpp
OBJS	= $(SRCS:.cpp=.o)

NAME	= convert
CC		= clang++
CCFLAG	= -Wall -Wextra -Werror
RM		= rm -f

%.o:		%.cpp
			$(CC) $(CCFLAG) -c $< -o $@


$(NAME):	$(OBJS)
			$(CC) $(CCFLAG) -I. -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

test:		$(NAME)
			./$(NAME) 0
			./$(NAME) nan
			./$(NAME) 42.0f

.PHONY:		all clean fclean re
