# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 13:38:21 by ahmaidi           #+#    #+#              #
#    Updated: 2022/03/17 03:46:12 by ahmaidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker
CC = gcc 
SRCS = Mandatory/instractions/operation_1.c Mandatory/instractions/operation_2.c Mandatory/instractions/operation_3.c \
Mandatory/instractions/push.c Mandatory/instractions/reverse.c Mandatory/instractions/rotate.c Mandatory/instractions/swap.c Mandatory/detecte_error.c Mandatory/ft_atoi_push.c  Mandatory/filling/filling_list.c \
Mandatory/ft_lstadd_back_bonus.c Mandatory/ft_lstlast_bonus.c Mandatory/ft_lstnew_bonus.c Mandatory/ft_lstsize_bonus.c Mandatory/ft_strlen.c Mandatory/is_sorted.c Mandatory/filling/filling_tab.c \
Mandatory/transforme_list.c Mandatory/sort_tab.c Mandatory/sorted_3.c Mandatory/ft_small_sorted.c Mandatory/ft_big_sorted.c Mandatory/push_to_a.c Mandatory/push_to_b.c Mandatory/push_swap.c \

SRCS_B = bonus/detecte_error_bonus.c bonus/ft_strlen_bonus.c bonus/ft_atoi_push_bonus.c bonus/ft_check_instr_bonus.c bonus/ft_strcmp_bonus.c bonus/get_next_line_utils_bonus.c bonus/get_next_line_bonus.c bonus/filling_list_bonus.c \
bonus/ft_lstnew_bonus.c bonus/ft_lstsize_bonus.c bonus/ft_lstlast_bonus.c bonus/ft_lstadd_back_bonus.c bonus/is_sorted_bonus.c bonus/instractions/operation_1_bonus.c bonus/instractions/operation_2_bonus.c bonus/instractions/operation_3_bonus.c \
bonus/instractions/push_bonus.c bonus/instractions/reverse_bonus.c bonus/instractions/rotate_bonus.c bonus/instractions/swap_bonus.c bonus/checker_bonus.c
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

all: $(NAME)

$(NAME): $(SRCS)
	@echo "__________ ______ ____  _________  ____  ____  "
	@echo "\_______  \      |    \/   _____/ /     |     \ "
	@echo " |     ___/      |    /\_____  \ /      -      \ "
	@echo " |    |   |      |   / /        \       Y      /"
	@echo " |____|   |_________/ /_______  /\______|___  /"
	@echo "                              \/            \/"
	@$(CC) $(CFLAGS) $(SRCS) -o push_swap
	@echo "\033[92mExecution file Created\033[0m"

bonus : $(BONUS)

$(BONUS): $(SRCS_B)
	@$(CC) $(CFLAGS) $(SRCS_B) -o checker
	@echo "\033[92mExecution file Created\033[0m"
fclean:
	@$(RM) $(NAME) $(BONUS)
	@echo "\033[91mExecution file deleted\033[0m"
re: fclean all

.PHONY: all fclean re