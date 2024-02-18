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
			tools/ft_clean_str.c tools/ft_create.c tools/ft_hooks.c tools/update_ppl.c tools/ft_down.c \
			tools/ft_swap.c tools/ft_up.c tools/ft_left.c tools/ft_right.c tools/ft_mving.c tools/ft_init.c \
			tools/ft_col_we.c tools/show_me.c tools/you_win.c

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
	@${CC} ${FLAGS} -c $< -o $@
	@$(CC) ${FLAGS} -Imlx -c $< -o $@


%.o: %.c


$(NAME):${OBJ} ${OBJS_GL} ${OBJS_L} ${OBJS_T}
	@ar rc $(NAME)  ${OBJS_L} $(OBJS) ${OBJS_T} ${OBJS_GL}
	$(CC) $(NAME) -lmlx -framework OpenGL -framework AppKit -o $(AOUT)
	@echo "$(GREEN)______________	  ___   _____________________"
	@echo "$(GREEN)7     77     7	  7  7   7     77     77     7"
	@echo "$(GREEN)|  ___!|  7  |	  |  |   |  7  ||  _  ||   __!"
	@echo "$(GREEN)!__   7|  |  |	  |  !___|  |  ||  7  ||  !  7"
	@echo "$(GREEN)7     ||  !  |____|     7|  !  ||  |  ||     |"
	@echo "$(GREEN)!_____!!_____!____!_____!!_____!!__!__!!_____!"
	@echo "$(GREEN) The Makefile of [SO_LONG] has been compiled!$(DEF_COLOR)"
	@echo "$(BLUE)\n !Use this command in the folder root: ./so_long maps/valids/<map_name>.ber\n$(DEF_COLOR)"
	@rm  $(NAME)
	@rm  $(OBJ)


clean:
	rm -rf $(OBJS) ${OBJS_GL} ${OBJS_L} ${OBJS_T} ${AOUT}

fclean: clean
	rm -rf $(NAME) ${AOUT}

re: fclean all
