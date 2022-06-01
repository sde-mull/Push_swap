/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklfun.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:51:21 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/03 20:51:21 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_stack_length(t_Node *stack_A)
{
	t_Node	*length;
	int		count;

	length = stack_A;
	count = 0;
	while (length != NULL)
	{
		length = length->next;
		count++;
	}
	return (count);
}

int	ft_retarrl(t_Node *stack, int inv)
{
	t_ar	var;

	var.add = 0;
	var.count = 0;
	var.len = ft_stack_length(stack);
	var.sort_arr = malloc((var.len) * sizeof(int));
	var.mid = var.len / 2;
	ft_fill_arr(var.sort_arr, stack, var.len);
	while (var.mid - 1 - var.add > 0 && var.mid + 1 + var.add < var.len)
	{
		var.add = var.add + inv;
		var.count++;
	}
	return (var.count);
}

void	ft_doc(t_Node **stack_B, int value)
{
	t_ar	var;

	var.len = ft_stack_length(*stack_B);
	var.check = ft_check_command(*stack_B, value, var.len);
	ft_use_command(stack_B, var.check, value);
}
