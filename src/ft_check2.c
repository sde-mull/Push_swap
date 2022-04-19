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

int ft_check_command(t_Node *stack_B, int value, int len)
{
    t_Node *first;
    int     check;
    int     count;

    first = stack_B;
    count = 0;
    while (first->value != value)
    {
        first = first->next;
        count++;
    }
    if (count > (len / 2))
        check = 1;
    else
        check = 0;
    return (check);
 }

int		ft_check_path(t_Node *stack_A, int mid)
{
	int count;
	int len;
	int checker;
    t_Node  *temp;

    temp = stack_A;
	len = ft_stack_length(temp);
	count = 0;
	while (temp != NULL)
	{
		if (temp->value <= mid)
            break;
        count++;
		temp = temp->next;
	}
	if (count > len / 2)
		checker = 1;
	else
		checker = 0;
	return (checker);
}

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
    int     value;
    int     check;
    int     len;

    if ((!(*stack_B)) || (!((*stack_B)->next)))
    {
        ft_rra(stack_A);
        return ;
    }
    value  = ft_get_value(*stack_B);
    len =    ft_stack_length(*stack_B);
    check  = ft_check_command(*stack_B, value, len);
    if (check == 1)
        ft_rrr(stack_A, stack_B);
    else
        ft_rra(stack_A);
}

void ft_check_rr(t_Node **stack_A, t_Node **stack_B)
{
    int     value;
    int     check;
    int     len;

    if ((!(*stack_B)) || (!((*stack_B)->next)))
    {
        ft_ra(stack_A);
        return ;
    }
    value  = ft_get_value(*stack_B);
    len =    ft_stack_length(*stack_B);
    check  = ft_check_command(*stack_B, value, len);
    if (check == 1)
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
