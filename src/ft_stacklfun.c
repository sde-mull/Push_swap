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

int    ft_retarrl(t_Node *stack, int inv)
{
    int *sort_arr;
    int mid;
    int len;
    int add;
	int count;

    add = 0;
	count = 0;
    len = ft_stack_length(stack);
    sort_arr = malloc((len) * sizeof(int));
    mid = len / 2;
    ft_fill_arr(sort_arr, stack, len);
    while (mid - 1 - add > 0 && mid + 1 + add < len)
    {
		add = add + inv;
		count++;
	}
	return (count);
}