NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = -rv

LIBFT_DIR = ./libft/
LIBFT = $(LIBFT_DIR)libft.a

SRCS = ft_printf.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_tools_functions.c

OBJS = $(SRCS:.c=.o)

all: ${NAME}

${NAME}: ${OBJS} ${LIBFT}
	cp $(LIBFT) $(NAME)
	${AR} ${ARFLAGS} ${NAME} ${OBJS}


${LIBFT}:
	@make -C ${LIBFT_DIR}

test: $(NAME) $(LIBFT)

	$(CC) $(CFLAGS)  main.c -L. -lftprintf -o test && ./test

clean:
	rm -f ${OBJS}
	rm -f test #TEST CLEAN
	@make -C ${LIBFT_DIR} clean

fclean: clean
	rm -f ${NAME}
	rm -f test #TEST CLEAN
	@make -C ${LIBFT_DIR} fclean

re: fclean all

.PHONY: all clean fclean re libft
