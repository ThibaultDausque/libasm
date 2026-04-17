NAME = tests
CC = gcc
CFLAGS = -arch x86_64 -Wall -Wextra -Werror -g -fsanitize=address
INCLUDES = -Iincludes
BIN = bin
SRCS = main.c \
		ft_strlen_test.c \
		ft_strcpy_test.c 
OBJS = $(SRCS:%.c=$(BIN)/%.o)

LIBASM = ../libasm.a

all: $(NAME)

$(BIN)/%.o: %.c
	@mkdir -p $(BIN)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) $(LIBASM)
	@$(CC) $(CFLAGS) $(LIBASM) $(OBJS) -o $(NAME)
	@echo "tests compiled"

clean:
	@rm -rf $(BIN)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all
