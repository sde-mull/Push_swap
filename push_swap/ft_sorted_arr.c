/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:26:22 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/08 20:23:09 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sort_arr(int *arr, t_Node *stack_A, int argc)
{
    int	index;
    int	value;
    t_Node *temp;

	temp = stack_A;
    index = 0;
    while (index <= argc)
	{
		temp = stack_A;
		while (temp->next != NULL)
		{
			value = temp->value;
			temp = temp->next;
			if (temp->value > value)
				arr[index] = value;
		}
		index++;
	}
}