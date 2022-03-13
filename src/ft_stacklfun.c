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

