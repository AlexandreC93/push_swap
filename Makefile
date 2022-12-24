CC = gcc
NAME = push_swap.a
AR = ar crs
LIBFT = libft

SRC = push_swap.c \
		pile.c \
		op.c \
		sort.c \
		sorting.c \
		utils.c \

CFLAGS = -Wall -Wextra -Werror
RM = rm -f
OBJ = $(SRC:%.c=%.o)
all = $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
