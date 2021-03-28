SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)

NAME	= identify
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
			./$(NAME)

.PHONY:		all clean fclean re

