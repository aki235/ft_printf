NAME		=	libftprintf.a

SRCS		=	ft_printf.c ft_print_hex.c ft_print_int.c ft_print_percent.c ft_print_ptr.c \
				ft_print_str.c ft_print_uint.c
OBJS		=	$(SRCS:.c=.o)

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

LIBFT_PATH	=	./libft
LIBFT		=	$(LIBFT_PATH)/libft.a

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJS)

fclean:		clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
