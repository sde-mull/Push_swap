/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:36:40 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/08 20:04:04 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_all(t_Node **stack_A, t_Node **stack_B)
{
	int	mid;

	mid = ft_film_check(stack_A, stack_B);
	while ((*stack_B) != NULL)
		ft_send_value(mid, stack_A, stack_B);
}

void	ft_fill_b(t_Node **stack_A, t_Node **stack_B, int mid)
{
	t_Node	*temp;
	t_ar	var;

	temp = *stack_A;
	while (temp != NULL)
	{
		var.check = ft_check_value(*stack_A, mid);
		if (var.check == 1)
			ft_send_b(stack_A, stack_B, mid);
		else
			break ;
		var.check_nbr = ft_check_b_numbers(*stack_A, *stack_B);
		if (ft_check_sorted(*stack_A) == 1 && var.check_nbr == 1)
			break ;
	}
}

int	ft_film_check(t_Node **stack_A, t_Node **stack_B)
{
	t_ar	var;

	var.index = 0;
	while (ft_stack_length(*stack_A) > 6)
	{
		if (ft_check_sorted(*stack_A) == 1)
			break ;
		var.mid = ft_retmidval(*stack_A);
		ft_fill_b(stack_A, stack_B, var.mid);
		var.index++;
	}
	var.check = ft_check_sorted(*stack_A);
	if (var.check == 0)
	{
		if (ft_stack_length(*stack_A) == 3)
			ft_3_sort(stack_A);
		else if (ft_stack_length(*stack_A) == 2)
			ft_2_sort(stack_A);
		else if (ft_stack_length(*stack_A) <= 5)
			ft_sort_5(stack_A, stack_B);
	}
	return (var.mid);
}

void	ft_send_b(t_Node **stack_A, t_Node **stack_B, int mid)
{
	int		checker;
	t_Node	*temp;

	temp = *stack_A;
	if (temp->value <= mid)
	{
		temp = temp->next;
		ft_check_ss(stack_A, stack_B);
		ft_pb(stack_A, stack_B);
		ft_check_ss(stack_A, stack_B);
	}
	else
	{
		checker = ft_check_path(*stack_A, mid);
		ft_check_ss(stack_A, stack_B);
		ft_cmd_path(stack_A, stack_B, checker, mid);
		ft_check_ss(stack_A, stack_B);
	}
}

void	ft_cmd_path(t_Node **stack_A, t_Node **stack_B, int checker, int mid)
{
	t_Node	*temp;

	temp = *stack_A;
	while (temp->value > mid)
	{
		if (checker == 1)
			ft_check_rrr(stack_A, stack_B);
		else
			ft_check_rr(stack_A, stack_B);
		temp = *stack_A;
	}
}
