NAME = ft_tests

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -I includes
BIN = bin
SRCS = main.c \
		ft_strlen_test.c \
		ft_strcpy_test.c \
		ft_strcmp_test.c \
		ft_write_test.c \
		ft_read_test.c \
		ft_strdup_test.c

OBJS = $(SRCS:%.c=$(BIN)/%.o)

LIBASM = ../libasm.a

all: $(NAME)

$(NAME): $(LIBASM) $(SRCS)
	@mkdir -p $(BIN)
	@$(CC) $(CFLAGS) $(SRCS) $(LIBASM) $(INCLUDES) -o $(NAME)
	@echo "tests compiled"

clean:
	@rm -rf $(BIN)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all
