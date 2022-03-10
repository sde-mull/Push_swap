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

int ft_check_value(t_Node *stack, int mid)
{
    t_Node *temp;

    temp = stack;
    while (temp != NULL)
    {
        if (temp->value <= mid)
            return (1);
        temp = temp->next;
    }
    return(0);
}

// int ft_check_command(t_Node *stack_B, int mid, int index, int value)
// {
//     t_Node *first;
//     t_Node *last;
//     //int     count;

//     first = stack_B;
//     last = stack_B;
//     //count = 0;
//     while (last->next != NULL)
//         last = last->next;
//     if (last->value < mid && first->value < mid)
//         return(index - 1);
//     /*while (first->value != value)
//     {
//         count++;
//         first = first->next;
//     }*/
//     //printf("count is %d\n", count);
//     return (index);
// }

int ft_check_index(t_Node *stack_B, int mid, int index)
{
    t_Node *first;
    t_Node *last;

    first = stack_B;
    last = stack_B;
    while (last->next != NULL)
        last = last->next;
    if (last->value < mid && first->value < mid)
        return(index - 1);
    return (index);
}