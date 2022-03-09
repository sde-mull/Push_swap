/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:36:40 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/08 20:04:04 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sort_all(t_Node **stack_A, t_Node **stack_B)
{
	int lenmid;
	int *midarr;
	int check;
    int index;

	lenmid = ft_mid_count(*stack_A);
	midarr = malloc((lenmid) * sizeof(int));
	index = ft_film_check(lenmid, midarr, stack_A, stack_B);
    ft_send_value(midarr, index, stack_A, stack_B);
	free(midarr);
}

void    ft_send_b(t_Node **stack_A, t_Node **stack_B, int mid)
{
	t_Node *temp;
	int     check;

	temp = *stack_A;
	while (temp != NULL)
	{
		check = ft_check_value(*stack_A, mid);
		if (check == 1)
		{
			if (temp->value <= mid)
			{
				temp = temp->next;
				ft_pb(stack_A, stack_B);
			}
			else
			{
				temp = temp->next;
				ft_ra(stack_A);
			}
		}
		else
			break ;
	}
}

int	ft_film_check(int lenmid, int *midarr, t_Node **stack_A, t_Node **stack_B)
{
	int index;
	int check;

	index = 0;
	while (index <= lenmid)
	{
		midarr[index] = ft_retmidval(*stack_A);
		ft_send_b(stack_A, stack_B, midarr[index]);
		index++;
	}
	check = ft_check_sorted(stack_A);
	if (check == 0)
	{
		if (ft_stack_length(*stack_A) == 3)
			ft_3_sort(stack_A);
		else if (ft_stack_length(*stack_A) == 2)
			ft_2_sort(stack_A);
	}
    return (index - 1);
}

void	ft_send_value(int *midarr, int index, t_Node **stack_A, t_Node **stack_B)
{
    int value;
    t_Node *temp;

    temp = *stack_B;
    value = ft_get_value(midarr[index - 1], *stack_B);;
    while (temp != NULL && temp->value >= midarr[index - 1])
    {
        if (value == temp->value)
        {;
            ft_pa(stack_A, stack_B);
            temp = *stack_B;
        }
        else
        {
            ft_rb(stack_B);
            temp = *stack_B;
            break;
        }
    }
}

int     ft_get_value(int mid, t_Node *stack_B)
{
	t_Node  *temp;
    int     value;

    temp = stack_B;
    value = 0;
    while (temp != NULL && temp->value > mid)
    {
        if (temp->value > value)
            value = temp->value;
        temp = temp->next;
    }
    if (value == 0)
    {
        while (temp != NULL)
        {
            if (temp->value > value)
                value = temp->value;
            temp = temp->next;
        }
    }
    return (value);
}