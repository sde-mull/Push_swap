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

int	ft_stack_length(t_Node **stack_A)
{
	t_Node	*length;
	int		count;

	length = *stack_A;
	count = 0;
	while (length != NULL)
	{
		length = length->next;
		count++;
	}
	return (count);
}

int	ft_check_sorted(t_Node **stack_A)
{
	t_Node	*first;
	t_Node	*second;

	first = *stack_A;
	second = (*stack_A)->next;
	while (second != NULL)
	{
		if (first->value > second->value)
			return (0);
		first = first->next;
		second = second->next;
	}
	return (1);
}
