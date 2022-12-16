NAME = push_swap.a

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

