SRCS = so_long.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror -g


NAME	= so_long.a
HEAD	= so_long.h

AOUT = so_long

SRCS_GET = src/get_next_line/get_next_line.c  src/get_next_line/get_next_line_utils.c

SRCS_L = src/libft/ft_atoi.c src/libft/ft_putchar_fd.c src/libft/ft_putendl_fd.c src/libft/ft_putnbr_fd.c \
         src/libft/ft_split.c src/libft/ft_isdigit.c src/libft/ft_putstr_fd.c src/libft/ft_bzero.c src/libft/ft_calloc.c \
			src/libft/ft_strjoin.c src/libft/ft_strlen.c  src/libft/ft_strnstr.c  src/libft/ft_strncmp.c

SRCS_T = tools/get_maps.c  tools/is_not_nline.c tools/is_one.c tools/is_s_ofone.c tools/is_eq_lenght.c  \
			tools/check_pce.c tools/check_extion.c  tools/framer_fill.c tools/get_pl_postion.c  \
			tools/get_demof_map.c tools/ft_switch.c tools/is_vextions.c tools/ft_create_gm.c \
			tools/ft_clean_str.c

SRC = so_long.c
OBJ = so_long.o
OBJS_GL = $(SRCS_GET:.c=.o)
OBJS_L = $(SRCS_L:.c=.o)
OBJS_T = $(SRCS_T:.c=.o)


GREEN = \033[1;32m
YELLOW=	\e[38;5;226m
BLUE = \033[1;34m
RESET = \033[0m
OK	=	[$(GREEN)SUCCESS$(RESET)]
NO	=	[$(YELLOW)INFO$(RESET)]

FLAGS = -Wall -Wextra -Werror -g

CC = cc
all: $(NAME) $(AOUT)


%.o: %.c ${HEAD}
	${CC} ${FLAGS} -c $< -o $@

$(NAME):${OBJ} ${OBJS_GL} ${OBJS_L} ${OBJS_T}
	@ar rc $(NAME)  ${OBJS_L} $(OBJS) ${OBJS_T} ${OBJS_GL}
	@ranlib $(NAME)

$(AOUT): $(NAME) $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) $(NAME) -o $@
	@$(RM) $(OBJ)
	@$(RM) $(NAME)
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)		so_long is running "
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@printf "$(OK) so_long is running.\n"


clean:
	rm -rf $(OBJS) ${OBJS_GL} ${OBJS_L} ${OBJS_T}

fclean: clean
	rm -rf $(NAME)

re: fclean all
