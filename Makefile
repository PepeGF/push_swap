SRCS = push_swap.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc

CFLAGS = -g -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	


clean:

fclean:

re:

.PHONY: all clean fclean re
