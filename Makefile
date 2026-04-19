NAME = libasm.a

ASMC = nasm
ASMFLAGS = -f elf64 -g
BIN = bin
SRCS = src/ft_strlen.s \
		src/ft_strcpy.s \
		src/ft_strcmp.s \
		src/ft_write.s \
		src/ft_read.s \
		src/ft_strdup.s
AR = ar
ARFLAGS = crs

OBJS = $(SRCS:src/%.s=$(BIN)/%.o)

all: $(NAME)

$(BIN)/%.o: src/%.s
	@mkdir -p $(BIN)
	@$(ASMC) $(ASMFLAGS) $< -o $@

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "project compiled"

clean:
	@rm -rf $(BIN)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

TEST_DIR = tests
TEST = $(TEST_DIR)/ft_tests

test : test_build
	@$(TEST)

test_build : $(NAME) $(TEST)
	@make -C $(TEST_DIR) clean

.PHONY: clean fclean all re test test_build
