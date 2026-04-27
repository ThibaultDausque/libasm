NAME = libasm.a

ASMC = nasm
ASMFLAGS = -felf64
BIN = bin
SRCS = src/ft_strlen.s \
		src/ft_strcpy.s \
		src/ft_strcmp.s \
		src/ft_write.s \
		src/ft_read.s \
		src/ft_strdup.s

SRCS_BONUS = bonus/ft_list_push_front.s

AR = ar
ARFLAGS = crs

OBJS = $(SRCS:src/%.s=$(BIN)/%.o)
OBJS_BONUS = $(SRCS_BONUS:bonus/%.s=$(BIN)/%.o)

$(BIN)/%.o: bonus/%.s
	@mkdir -p $(BIN)
	@$(ASMC) $(ASMFLAGS) $< -o $@

all: $(NAME)

$(BIN)/%.o: src/%.s
	@mkdir -p $(BIN)
	@$(ASMC) $(ASMFLAGS) $< -o $@

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "libasm compiled ✅🚀"

bonus: $(OBJS_BONUS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)
	@echo "libasm bonus compiled ✅🚀​​"
	@echo "tu vas te régaler mon reuf"

clean:
	@rm -rf $(BIN)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

TEST_DIR = tests
TEST = $(TEST_DIR)/ft_tests

.PHONY: clean fclean all re bonus
