/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:53:45 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/02 17:53:45 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort(t_Node **stack_A, t_Node **stack_B)
{
	t_ar	var;

	var.sort = 0;
	var.sort = ft_check_sorted(*stack_A);
	var.count = ft_stack_length(*stack_A);
	if (var.sort == 1)
		return ;
	else if (var.count == 2)
		ft_2_sort(stack_A);
	else if (var.count == 3)
		ft_3_sort(stack_A);
	else if (var.count <= 5)
		ft_sort_5(stack_A, stack_B);
	else if (var.count <= 400)
		ft_sort_all(stack_A, stack_B);
	else
		ft_sorteve(stack_A, stack_B);
}

void	ft_2_sort(t_Node **stack_A)
{
	if (ft_check_sorted(*stack_A) == 0)
		ft_sa(stack_A);
}

void	ft_3_sort(t_Node **stack_A)
{
	t_Node	*first;
	t_Node	*mid;
	t_Node	*last;

	first = *stack_A;
	mid = first->next;
	last = mid->next;
	if (first->value > mid ->value && last->value > first->value)
		ft_sa(stack_A);
	else if (first->value > mid ->value && last->value < mid->value)
	{
		ft_sa(stack_A);
		ft_rra(stack_A);
	}
	else if (first->value > mid ->value && last->value < first->value)
		ft_ra(stack_A);
	else if (mid->value > first->value && first->value < last->value)
	{
		ft_sa(stack_A);
		ft_ra(stack_A);
	}
	else if (mid->value > first->value && first->value > last->value)
		ft_rra(stack_A);
}

void	ft_sort_5(t_Node **stack_A, t_Node **stack_B)
{
	t_ar	var;

	var.count = 0;
	var.mid = ft_retmidval(*stack_A);
	while (ft_stack_length(*stack_A) > 3)
	{
		if ((*stack_A)->value <= var.mid)
		{
			ft_pb(stack_A, stack_B);
			var.count++;
		}
		else
			ft_ra(stack_A);
	}
	ft_check_sb(stack_B);
	if (ft_check_sorted(*stack_A) == 0)
		ft_3_sort(stack_A);
	while (var.count-- != 0)
		ft_pa(stack_A, stack_B);
}
