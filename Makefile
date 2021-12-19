SRCS = push_swap.c ft_verify_input.c ft_manage_input.c \
	   ft_op_s.c ft_op_p.c ft_op_r.c ft_op_rr.c


OBJS = $(SRCS:.c=.o)

NAME = push_swap

LIBFT_PATH = libft/

CC = gcc

CFLAGS = -g -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(LIBFT_PATH)

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT_PATH) --silent
	@$(CC) -o $(NAME) $? -I. -L./libft -lft
	@echo "push_swap: ready to be executed"

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_PATH) clean --silent

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) fclean --silent

re: fclean $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) clean --silent

.PHONY: all clean fclean re
