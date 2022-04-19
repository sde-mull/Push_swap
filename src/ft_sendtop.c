/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:12:09 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/11 17:51:58 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_sendtop(int midarr, t_Node **stack_A, t_Node **stack_B)
{
    int     value;
    t_Node *temp;
    int     checked;
    int     nvalue;

    temp = *stack_B;
    value = ft_get_value(*stack_B);
    nvalue = ft_get_nvalue(*stack_B);
    checked = 0;
    while (value >= midarr)
    {
        temp = *stack_B;
        if (checked == 0)
            checked = ft_check_nv(temp->value, nvalue, stack_A, stack_B);
        if (value == temp->value)
        {
            ft_pa(stack_A,stack_B);
            break ;
        }
        else
            ft_doc(stack_B, value);
    }
    if (checked == 1)
        ft_sa(stack_A);
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

void ft_use_command(t_Node **stack_B, int check, int value)
{
    t_Node *temp;

    temp = *stack_B;
    while (temp->value != value)
    {
        if (check == 1)
        {
            ft_rrb(stack_B);
            temp = *stack_B;
        }
        else if (check == 0)
        {
            ft_rb(stack_B);
            temp = *stack_B;
        }
    }
}

void ft_send_value(int midarr, t_Node **stack_A, t_Node **stack_B)
{
    int     value;
    t_Node *temp;
    int     nvalue;
    int     checked;

    temp = *stack_B;
    checked = 0;
    nvalue = ft_get_nvalue(*stack_B);
    value = ft_get_value(*stack_B);
    while (temp != NULL && temp->value <= midarr)
    {
        temp = *stack_B;
        if (checked != 1)
            checked = ft_check_nv(temp->value, nvalue, stack_A, stack_B);
        if (value == temp->value)
        {;
            ft_pa(stack_A, stack_B);
            break ;
        }
        else
            ft_doc(stack_B, value);
    }
    if (checked == 1)
        ft_sa(stack_A);
}

int     ft_get_nvalue(t_Node *stack_B)
{
	t_Node  *temp;
    int     value;
    int     len;
    int     *arr;

    temp = stack_B;
    len = ft_stack_length(stack_B);
    arr = malloc(sizeof(int) * len);
    ft_fill_arr(arr, stack_B, len);
    value = arr[len - 2];
    free(arr);
    return (value);
}

void ft_doc(t_Node **stack_B, int value)
{
    int     len;
    int     check;

    len = ft_stack_length(*stack_B);
    check = ft_check_command(*stack_B, value, len);
    ft_use_command(stack_B, check, value);
}

int ft_check_nv(int temp, int nvalue, t_Node **stack_A, t_Node **stack_B)
{
    int checked;

    checked = 0;
    if (nvalue == temp)
    {
        ft_pa(stack_A,stack_B);
        checked = 1;
        return (checked);
    }
    return (checked);
}