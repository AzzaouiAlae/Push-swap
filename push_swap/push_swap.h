/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:32 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:33 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "cs_list/cs_list.h"
# include "log_linear_algos/log_linear_algos.h"
# include <limits.h>

void		set_inputs_to_stack(char **arg_v);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			mid_num(int *nums, int count);
int			is_rest_stack_b_sorted(void);
int			min_num(int *nums, int count);
int			index_min_num(int *nums, int count);
int			max_num(int *nums, int count);
int			index_max_num(int *nums, int count);
void		reset_current_actions(void);
int			is_lowest_actions_greter(void);
void		set_curent_to_lowest_actions(char *algo_name);
char		*lowest_algo_name(char *s);
t_cs_list	*algo_name_list(void);
t_cs_list	*algo_func_list(void);
void		add_func(void (*func)(void), char *name);
int			is_rest_stack_sorted(void);
int			is_sorted(void);
void		print_num(int *nums, int count);
void		reset_stacks(void);
t_cs_list	*origin_stack(void);
void		bubble_sort(void);
void		print_actions(t_cs_list *lowest_mv);
t_cs_list	**current_actions(void);
void		add_current_move(t_move_name move);
t_cs_list	**lowest_actions(void);
void		ft_putstr(char *s);
char		**ft_split(const char *s, char *sep);
char		*ft_strchr(const char *s, int c);
int			ft_atoi(const char *str);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *s);
char		*ft_substr(const char *s, unsigned int start, size_t len);
void		ft_swap(int *n1, int *n2);
size_t		ft_strlen(const char *s);
t_cs_list	*stack_a(void);
t_cs_list	*stack_b(void);
void		sa(void);
void		sb(void);
void		ss(void);
void		pa(void);
void		pb(void);
void		rra(void);
void		rrb(void);
void		rrr(void);
void		ra(void);
void		rb(void);
void		rr(void);

#endif