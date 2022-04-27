CC=			gcc
NAME=		push_swap
RM=			rm -f
CD=			cd

CFLAGS=		\
			-Wall\
			-Werror\
			-Wextra\

SRC_DIR=	src
LFT_DIR=	libft

SRCS=		$(shell find $(SRC_DIR) -maxdepth 1 -type f -name "*.c")

all: $(NAME)

$(NAME): $(SRCS)
		@$(MAKE) all -C ./libft
		@$(CC) $(CFLAGS) $(LFT_DIR)/$(LFT_DIR).a $(SRCS) -o $(NAME)

libft:
	$(MAKE) all -C ./libft

clean:
	$(RM) $(OBJS)

fclean: clean
	$(CD) $(LFT_DIR) && make -i fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all libft clean fclean re