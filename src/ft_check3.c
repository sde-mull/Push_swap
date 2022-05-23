/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:28:41 by sde-mull          #+#    #+#             */
/*   Updated: 2022/04/08 01:28:41 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int ft_checkit(int i, int c, t_Node *stka, int *top)
{
    if (i + 1 < c)
        {
            if (ft_checktop(stka, top[i], top[i + 1]) == 0)
                    i++; 
        }
    return (i);
}

int ft_checkib(int i, int c, t_Node *stka, int *bot)
{
    if (i + 1 < c)
        {
            if (ft_checkbot(stka, bot[i], bot[i + 1]) == 0)
                    i++; 
        }
    return (i);
}

int ft_check_lpath(t_Node *stack_A)
{
    int len;

    len = ft_stack_length(stack_A);
    if (len <= 20)
        return(5);
    else if (len <= 50)
        return(10);
    else if (len <= 100)
        return (20);
    else
        return (30);
}

int ft_checktop(t_Node *stack, int top1, int top2)
{
    t_Node *temp;

    temp = stack;
    while (temp != NULL)
    {
        if (temp->value > top1 && temp->value < top2)
            return (1);
        temp = temp->next;
    }
    return(0);
}

int ft_checkbot(t_Node *stack, int bot1, int bot2)
{
    t_Node *temp;

    temp = stack;
    while (temp != NULL)
    {
        if (temp->value < bot1 && temp->value > bot2)
            return (1);
        temp = temp->next;
    }
    return(0);
}