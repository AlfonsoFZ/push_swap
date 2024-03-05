#to be used in windows & wsl
NAME =	push_swap
BONUS = checker
CC= gcc
INCLUDE = ./include/
CFLAGS= -Wall -Werror -Wextra -I./$(INCLUDE)
SRC_DIR= src/
OBJ_DIR= obj/
SLASH= ./
RM = rm -rf
LIBFTEXT = ./libftExt/libftext.a
SRC_FILES= push_swap checkargs push_swap_utils ft_long_atoi\
ft_split ft_isdigit ft_substr ft_strlen ft_strdup ft_calloc ft_bzero\
mov_swapandpush mov_revrotate mov_rotate sort dt_init sort_utils\
ft_free_exit quick_sort big_numbers sort_big sort_small

SRCBONUS= push_swap_bonus checkargs push_swap_utils ft_long_atoi\
ft_split ft_isdigit ft_substr ft_strlen ft_strdup ft_calloc ft_bzero\
mov_swapandpush_bonus mov_revrotate_bonus mov_rotate_bonus sort dt_init sort_utils\
ft_free_exit quick_sort big_numbers sort_big sort_small\
checker

SRC= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
SRC_BONUS= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRCBONUS)))
OBJF= .cache_exists

all: $(LIBFTEXT) $(NAME) 

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SLASH)$(SRC) $(LIBFTEXT) -o $(NAME) 

$(LIBFTEXT):
	@make -C ./libftExt

$(OBJF):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
	@$(CC) -c $(CFLAGS) $< -o $@ 

bonus: $(LIBFTEXT) ${BONUS}

${BONUS}: $(OBJ)
	@$(CC) $(CFLAGS) $(SLASH)$(SRC_BONUS) $(LIBFTEXT) -o ${BONUS}
	
clean:
# @$(RM) $(OBJ)
	@$(RM) $(OBJ_DIR)
	@make -C ./libftExt clean

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(BONUS)
	@make fclean -C ./libftExt

re: fclean all

.PHONY: all re fclean clean bonus








