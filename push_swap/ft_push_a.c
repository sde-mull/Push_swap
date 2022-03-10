/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:12:09 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/10 18:45:54 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_send_value(int *midarr, int index, t_Node **stack_A, t_Node **stack_B)
{
    int value;
    t_Node *temp;

    temp = *stack_B;
    value = ft_get_value(*stack_B);
    while (temp != NULL && temp->value <= midarr[index])
    {
        if (value == temp->value)
        {;
            ft_pa(stack_A, stack_B);
            temp = *stack_B;
            break ;
        }
        else
        {
            ft_rb(stack_B);
            temp = *stack_B;
        }
    }
}

int     ft_get_value(t_Node *stack_B)
{
	t_Node  *temp;
    int     value;

    temp = stack_B;
    value = temp->value;
    while (temp != NULL)
    {
        if (temp->value > value)
            value = temp->value;
        temp = temp->next;
    }
    return (value);
}

