/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:13 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 19:24:11 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../Libft/libft.h"

typedef struct Node
{
	int			value;
	struct Node	*next;
}	t_Node;

void	ft_insert_number(t_Node **root, int value);
t_Node	*ft_steps(int argc, char *argv[]);
t_Node	*ft_stack(int argc, char *argv[]);
void	ft_deallocate(t_Node **root);
void	ft_swap(t_Node **stack);
void	ft_sa(t_Node **stack_A);
void	ft_sb(t_Node **stack_B);
void	ft_ss(t_Node **stack_A, t_Node **stack_B);
void	ft_rb(t_Node **stack_B);
void	ft_rr(t_Node **stack_A, t_Node **stack_B);
void	ft_ra(t_Node **stack_A);
void	ft_rotate(t_Node **stack);
void	ft_rra(t_Node **stack_A);
void	ft_rrb(t_Node **stack_B);
void	ft_rrr(t_Node **stack_A, t_Node **stack_B);
void	ft_reverse(t_Node **stack);
void	ft_push(t_Node **srcstack, t_Node **dststack);
void	ft_pa(t_Node **stack_A, t_Node **stack_B);
void	ft_pb(t_Node **stack_A, t_Node **stack_B);
void	ft_sort(t_Node **stack_A, t_Node **stack_B);
void	ft_check_number_error(char *argv);
int		ft_check_sorted(t_Node **stack_A);
int		ft_stack_length(t_Node *stack_A);
void	ft_check_error_limits(long long converted);
void	ft_check_double_error(t_Node **stack_A);
void	ft_3_sort(t_Node **stack_A);
void	ft_2_sort(t_Node **stack_A);
void    ft_fill_arr(int *arr, t_Node *stack_A, int len);
void    ft_sort_all(t_Node **stack_A, t_Node **stack_B);
void    ft_sort_arr(int *arr, int len);
int     ft_get_mid_number(int *arr, t_Node *stack_A, int len);
int     ft_retmidval(t_Node *stack);
int     ft_check_inv_sorted(t_Node **stack_A);
int     ft_mid_count(t_Node *stack_A);
void    ft_send_b(t_Node **stack_A, t_Node **stack_B, int mid);
int     ft_check_value(t_Node *stack, int mid);
int     ft_film_check(int lenmid, int *midarr, t_Node **stack_A, t_Node **stack_B);
void	ft_send_value(int *midarr, int index, t_Node **stack_A, t_Node **stack_B);
int     ft_get_value(int mid, t_Node *stack_B);

#endif