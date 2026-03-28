NAME = libasm.a

ASMC = nasm
ASMFLAGS = -felf64 -g
BIN = bin
SRCS = $(wildcard src/*.s)
AR = ar
ARFLAGS = crs

OBJS = $(SRCS:src/%.s=$(BIN)/%.o)

all: $(NAME)

$(BIN):
	@mkdir -p $(BIN)

$(BIN)/%.o: src/%.s | $(BIN)
	@$(ASMC) $(ASMFLAGS) $< -o $@
	@echo "bin created"

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "project compiled"

clean:
	@rm -rf $(BIN)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all