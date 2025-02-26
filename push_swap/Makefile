SRC =	stacks.c	swap.c	push.c	rotate.c	reverse_rotate.c	moves.c	moves2.c	algo_list.c	max_min_num.c	moves3.c	stacks2.c	cs_list/cs_list_add.c	cs_list/cs_list_new.c	cs_list/cs_list_resize.c	cs_list/ft_memcpy.c	cs_list/cs_list_insert.c	cs_list/cs_list_delete.c	cs_list/cs_list_contains.c	garbage_collector/ft_calloc.c	garbage_collector/ft_exit.c	garbage_collector/ft_free.c	garbage_collector/ft_save_mem.c	garbage_collector/mem_list.c	garbage_collector/ft_putstr_fd.c	ft_func/ft_atoi.c	ft_func/ft_split.c	ft_func/ft_strchr.c	ft_func/ft_strdup.c	ft_func/ft_strlen.c	ft_func/ft_substr.c	ft_func/ft_putstr.c	ft_func/ft_strncmp.c	quadratic_algos/bubble_sort.c	quadratic_algos/selection_sort.c	quadratic_algos/insertion_sort.c	quadratic_algos/gnome_sort.c	quadratic_algos/cocktail_shaker_sort.c	quadratic_algos/add_quadratic_algos_to_list.c	quadratic_algos/insertion_sort2.c	log_linear_algos/add_log_linear_algos_to_list.c	log_linear_algos/insertion_select_quick_alae_sort1_1.c	log_linear_algos/insertion_select_quick_alae_sort1_2.c	log_linear_algos/insertion_select_quick_alae_sort1_3.c	log_linear_algos/insertion_select_quick_alae_sort1_4.c	log_linear_algos/insertion_select_quick_alae_sort1_5.c	log_linear_algos/insertion_select_quick_alae_sort2_1.c	log_linear_algos/insertion_select_quick_alae_sort2_2.c	log_linear_algos/insertion_select_quick_alae_sort2_3.c	log_linear_algos/insertion_select_quick_alae_sort2_4.c	log_linear_algos/insertion_select_quick_sort1_1.c	log_linear_algos/insertion_select_quick_sort1_2.c	log_linear_algos/insertion_select_quick_sort1_3.c	log_linear_algos/insertion_select_quick_sort1_4.c	log_linear_algos/insertion_select_quick_sort2_1.c	log_linear_algos/insertion_select_quick_sort2_2.c	log_linear_algos/insertion_select_quick_sort2_3.c	log_linear_algos/insertion_select_quick_sort2_4.c	log_linear_algos/insertion_select_sort1.c	log_linear_algos/insertion_select_sort2.c	
SRC_bonus = checker_bonus/checker_bonus.c	$(SRC)
SRC_Mandatory = push_swap.c	$(SRC)
OBJ = 	stacks.o	swap.o	push.o	rotate.o	reverse_rotate.o	moves.o	moves2.o	algo_list.o	max_min_num.o	moves3.o	stacks2.o	cs_list/cs_list_add.o	cs_list/cs_list_new.o	cs_list/cs_list_resize.o	cs_list/ft_memcpy.o	cs_list/cs_list_insert.o	cs_list/cs_list_delete.o	cs_list/cs_list_contains.o	garbage_collector/ft_calloc.o	garbage_collector/ft_exit.o	garbage_collector/ft_free.o	garbage_collector/ft_save_mem.o	garbage_collector/mem_list.o	garbage_collector/ft_putstr_fd.o	ft_func/ft_atoi.o	ft_func/ft_split.o	ft_func/ft_strchr.o	ft_func/ft_strdup.o	ft_func/ft_strlen.o	ft_func/ft_substr.o	ft_func/ft_putstr.o	ft_func/ft_strncmp.o	quadratic_algos/bubble_sort.o	quadratic_algos/selection_sort.o	quadratic_algos/insertion_sort.o	quadratic_algos/gnome_sort.o	quadratic_algos/cocktail_shaker_sort.o	quadratic_algos/add_quadratic_algos_to_list.o	quadratic_algos/insertion_sort2.o	log_linear_algos/add_log_linear_algos_to_list.o	log_linear_algos/insertion_select_quick_alae_sort1_1.o	log_linear_algos/insertion_select_quick_alae_sort1_2.o	log_linear_algos/insertion_select_quick_alae_sort1_3.o	log_linear_algos/insertion_select_quick_alae_sort1_4.o	log_linear_algos/insertion_select_quick_alae_sort1_5.o	log_linear_algos/insertion_select_quick_alae_sort2_1.o	log_linear_algos/insertion_select_quick_alae_sort2_2.o	log_linear_algos/insertion_select_quick_alae_sort2_3.o	log_linear_algos/insertion_select_quick_alae_sort2_4.o	log_linear_algos/insertion_select_quick_sort1_1.o	log_linear_algos/insertion_select_quick_sort1_2.o	log_linear_algos/insertion_select_quick_sort1_3.o	log_linear_algos/insertion_select_quick_sort1_4.o	log_linear_algos/insertion_select_quick_sort2_1.o	log_linear_algos/insertion_select_quick_sort2_2.o	log_linear_algos/insertion_select_quick_sort2_3.o	log_linear_algos/insertion_select_quick_sort2_4.o	log_linear_algos/insertion_select_sort1.o	log_linear_algos/insertion_select_sort2.o
OBJ_bonus = checker_bonus/checker_bonus.o	$(OBJ)
OBJ_Mandatory = push_swap.o	$(OBJ)
NAME=push_swap
bonus=checker
CFLAGS=-Wall -Wextra -Werror
CC = cc

all: $(NAME) 

$(NAME): $(OBJ_Mandatory)
	$(CC) $(OBJ_Mandatory) -o $(NAME)

bonus: $(bonus)

$(bonus): $(OBJ_bonus)
	$(CC) $(OBJ_bonus) -o $(bonus)

clean:
	rm -f $(OBJ_Mandatory) $(OBJ_bonus)

fclean: clean
	rm -f $(NAME) $(bonus)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
