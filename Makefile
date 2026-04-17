NAME = libasm.a

ASMC = nasm
ASMFLAGS = -fmacho64 -g
BIN = bin
SRCS = src/ft_strlen.s \
		src/ft_strcpy.s
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

.PHONY: clean fclean all
