NAME = zombies


SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
RM = rm -f

all:	$(NAME)

run: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	./${NAME}

${NAME}: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS) $(OBJS_B) 

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus