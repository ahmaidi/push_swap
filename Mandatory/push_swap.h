/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:07:31 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 22:19:10 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				index;
	int				data;
	struct s_list	*next;
}t_list;

typedef struct s_biggest
{
	int	data;
	int	index;
	int	moves;
}t_biggest;

/*------ INSTRUCTIONS------*/
void	push(t_list **lst, t_list **lst1);
void	reverse(t_list **lst);
void	rotate(t_list **a);
void	swap(t_list **a);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
/*------------------*/

/*------- DETECTE_ERROR-----------*/
int		detect_error(char **s);
size_t	ft_strlen(const char *s);
/*--------------------------------*/

/*---------list functions----------*/
void	ft_lstadd_back(t_list **lst, t_list *news);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst);
void	transforme_list(t_list **lst);
/*---------------------------------*/
/*------------tab function---------*/
int		*filling_tab(t_list *lst);
void	sort_tab(int *tab, int low, int high);
/*---------------------------------*/

/*------ convert string to int --------*/
int		ft_atoi_push(const char *str);
void	filling_list(t_list **head, char **ar);
/*----------------------*/
/*---------Sorted----------*/
int		is_sorted(t_list **a);
void	sorted_3(t_list **a, int nbr);
void	ft_small_sorted(t_list **a);
void	ft_big_sorted(t_list **a);
void	push_to_a(t_list **a, t_list **b, int index_bigger);
void	push_to_b(t_list **a, t_list **b);
/*-------------------------*/

#endif