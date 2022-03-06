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

void ft_sort(Node **stack_A, Node **stack_B)
{
    int count;

    count = ft_stack_lenght(stack_A);
    printf("The stack have %d numbers\n", count);
}

int check_sorted(Node **stack_A)
{
    Node *first;
	Node *second;

    first = *stack_A;
	second = (*stack_A)->next;
	while(second != NULL)
	{
		if (first->value > second->value)
			return(1);
		first = first->next;
		second = second->next;
	}
	return(0);
}