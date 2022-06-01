/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:51:33 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/09 21:51:33 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_check_value(t_Node *stack, int mid)
{
	t_Node	*temp;

	temp = stack;
	while (temp != NULL)
	{
		if (temp->value <= mid)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	ft_check_command(t_Node *stack_B, int value, int len)
{
	t_Node	*first;
	t_ar	var;

	first = stack_B;
	var.count = 0;
	while (first->value != value)
	{
		first = first->next;
		var.count++;
	}
	if (var.count > (len / 2))
		var.check = 1;
	else
		var.check = 0;
	return (var.check);
}

int	ft_check_path(t_Node *stack_A, int mid)
{
	t_Node	*temp;
	t_ar	var;

	temp = stack_A;
	var.len = ft_stack_length(temp);
	var.count = 0;
	while (temp != NULL)
	{
		if (temp->value <= mid)
			break ;
		var.count++;
		temp = temp->next;
	}
	if (var.count > var.len / 2)
		var.checker = 1;
	else
		var.checker = 0;
	return (var.checker);
}

int	ft_check_nv(int temp, int nvalue, t_Node **stack_A, t_Node **stack_B)
{
	int	checked;

	checked = 0;
	if (nvalue == temp)
	{
		ft_pa(stack_A, stack_B);
		checked = 1;
		return (checked);
	}
	return (checked);
}
