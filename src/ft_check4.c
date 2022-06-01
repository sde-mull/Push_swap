/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:08:01 by sde-mull          #+#    #+#             */
/*   Updated: 2022/06/01 15:34:14 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_check_ss(t_Node **stack_A, t_Node **stack_B)
{
	t_Node	*temp_a;
	t_Node	*temp_b;

	temp_a = *stack_A;
	temp_b = *stack_B;
	if ((!temp_a) || (!temp_b) || (!temp_b->next))
		return ;
	if (temp_a->value > temp_a->next->value
		&& temp_b->value < temp_b->next->value)
		ft_ss(stack_A, stack_B);
	else if (temp_b->value < temp_b->next->value)
		ft_sb(stack_B);
}

void	ft_check_rrr(t_Node **stack_A, t_Node **stack_B)
{
	t_ar	var;

	if ((!(*stack_B)) || (!((*stack_B)->next)))
	{
		ft_rra(stack_A);
		return ;
	}
	var.value = ft_get_value(*stack_B);
	var.len = ft_stack_length(*stack_B);
	var.check = ft_check_command(*stack_B, var.value, var.len);
	if (var.check == 1)
		ft_rrr(stack_A, stack_B);
	else
		ft_rra(stack_A);
}

void	ft_check_rr(t_Node **stack_A, t_Node **stack_B)
{
	t_ar	var;

	if ((!(*stack_B)) || (!((*stack_B)->next)))
	{
		ft_ra(stack_A);
		return ;
	}
	var.value = ft_get_value(*stack_B);
	var.len = ft_stack_length(*stack_B);
	var.check = ft_check_command(*stack_B, var.value, var.len);
	if (var.check == 1)
		ft_ra(stack_A);
	else
		ft_rr(stack_A, stack_B);
}

void	ft_check_sb(t_Node **stack_B)
{
	t_Node	*temp_b;

	temp_b = *stack_B;
	if ((!temp_b) || (!temp_b->next))
		return ;
	if (temp_b->value < temp_b->next->value)
		ft_sb(stack_B);
}
