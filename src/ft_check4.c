/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:08:01 by sde-mull          #+#    #+#             */
/*   Updated: 2022/04/20 14:08:59 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void   ft_check_ss(t_Node **stack_A, t_Node **stack_B)
{
    t_Node  *temp_A;
    t_Node  *temp_B;

    temp_A = *stack_A;
    temp_B = *stack_B;
    if ((!temp_A)  || (!temp_B) || (!temp_B->next))
        return ;
    if (temp_A->value > temp_A->next->value 
        && temp_B->value < temp_B->next->value)
        ft_ss(stack_A, stack_B);
	else if (temp_B->value < temp_B->next->value)
		ft_sb(stack_B);
}

void ft_check_rrr(t_Node **stack_A, t_Node **stack_B)
{
    v_ar    var;

    if ((!(*stack_B)) || (!((*stack_B)->next)))
    {
        ft_rra(stack_A);
        return ;
    }
    var.value  = ft_get_value(*stack_B);
    var.len =    ft_stack_length(*stack_B);
    var.check  = ft_check_command(*stack_B, var.value, var.len);
    if (var.check == 1)
        ft_rrr(stack_A, stack_B);
    else
        ft_rra(stack_A);
}

void ft_check_rr(t_Node **stack_A, t_Node **stack_B)
{
    v_ar    var;

    if ((!(*stack_B)) || (!((*stack_B)->next)))
    {
        ft_ra(stack_A);
        return ;
    }
    var.value  = ft_get_value(*stack_B);
    var.len =    ft_stack_length(*stack_B);
    var.check  = ft_check_command(*stack_B, var.value, var.len);
    if (var.check == 1)
        ft_ra(stack_A);
    else
        ft_rr(stack_A, stack_B);
}

void   ft_check_sb(t_Node **stack_B)
{
    t_Node  *temp_B;

    temp_B = *stack_B;
    if ((!temp_B) || (!temp_B->next))
        return ;
	if (temp_B->value < temp_B->next->value)
		ft_sb(stack_B);
}