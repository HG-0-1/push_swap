NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -I./libft
# LDFLAGS = -lmlx -lXext -lX11 -lm
LIBFT = libft/libft.a

SRCS = move.c radix.c push_swap.c uitle.c handel_num.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) $(LIBFT)

$(NAME): $(OBJS) $(LIBFT) 
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C libft clean


fclean: clean
	rm -f $(NAME)
	make -C libft fclean


re: fclean all

.PHONY: all clean fclean re