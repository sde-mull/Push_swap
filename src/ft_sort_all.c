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
    int index;

	lenmid = ft_mid_count(*stack_A);
	midarr = malloc((lenmid) * sizeof(int));
	index = ft_film_check(lenmid, midarr, stack_A, stack_B);
	while ((*stack_B) != NULL)
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
		if (ft_stack_length(*stack_A) <= 3)
			break;
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

