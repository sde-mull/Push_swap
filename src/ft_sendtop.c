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

void ft_sendtop(int midarr, t_Node **stkA, t_Node **stkB)
{
    v_ar    var;
    t_Node *temp;

    temp = *stkB;
    var.value = ft_get_value(*stkB);
    var.nvalue = ft_get_nvalue(*stkB);
    var.checked = 0;
    while (var.value >= midarr)
    {
        temp = *stkB;
        if (var.checked == 0)
            var.checked = ft_check_nv(temp->value, var.nvalue, stkA, stkB);
        if (var.value == temp->value)
        {
            ft_pa(stkA,stkB);
            break ;
        }
        else
            ft_doc(stkB, var.value);
    }
    if (var.checked == 1)
        ft_sa(stkA);
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

void ft_send_value(int midarr, t_Node **stkA, t_Node **stkB)
{
    v_ar    var;
    t_Node *temp;

    temp = *stkB;
    var.checked = 0;
    var.nvalue = ft_get_nvalue(*stkB);
    var.value = ft_get_value(*stkB);
    while (temp != NULL && temp->value <= midarr)
    {
        temp = *stkB;
        if (var.checked != 1)
            var.checked = ft_check_nv(temp->value, var.nvalue, stkA, stkB);
        if (var.value == temp->value)
        {;
            ft_pa(stkA, stkB);
            break ;
        }
        else
            ft_doc(stkB, var.value);
    }
    if (var.checked == 1)
        ft_sa(stkA);
}

int     ft_get_nvalue(t_Node *stack_B)
{
	t_Node  *temp;
    v_ar    var;
    

    temp = stack_B;
    var.len = ft_stack_length(stack_B);
    var.arr = malloc(sizeof(int) * var.len);
    ft_fill_arr(var.arr, stack_B, var.len);
    var.value = var.arr[var.len - 2];
    free(var.arr);
    return (var.value);
}
