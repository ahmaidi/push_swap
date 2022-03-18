/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaidi <ahmaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:04:55 by ahmaidi           #+#    #+#             */
/*   Updated: 2022/03/16 04:04:04 by ahmaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}t_list;

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

int		detect_error(char **s);
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen_get(const char *s);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_check_instr(char *line);
int		ft_strcmp(char const *s1, char const *s2);
void	filling_list(t_list **head, char **ar);
int		is_sorted(t_list **a);
void	ft_lstadd_back(t_list **lst, t_list *news);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
int		ft_atoi_push(const char *str);
#endif