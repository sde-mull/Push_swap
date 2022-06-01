/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:58:31 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/03 21:58:31 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_check_number_error(char *argv)
{
	int	index2;

	index2 = 0;
	while (argv[index2])
	{
		if ((argv[index2] < '0' || argv[index2] > '9')
			&& argv[index2] != '-' && argv[index2] != '+')
		{
			write(2, "Error\n", 7);
			exit(EXIT_FAILURE);
		}
			index2++;
	}
}

void	ft_check_error_limits(long long converted)
{
	if (converted <= INT_MAX && converted >= INT_MIN)
		return ;
	write(2, "Error\n", 7);
	exit(EXIT_FAILURE);
}

void	ft_check_double_error(t_Node **stack_A)
{
	t_Node	*first;
	t_Node	*check;

	first = *stack_A;
	check = first->next;
	while (first->next != NULL)
	{
		check = first->next;
		while (check != NULL)
		{
			if (first->value == check->value)
			{
				write(2, "Error\n", 7);
				exit(EXIT_FAILURE);
			}
			check = check->next;
		}	
		first = first->next;
	}
}

int	ft_check_sorted(t_Node *stack_A)
{
	t_Node	*first;
	t_Node	*second;

	first = stack_A;
	second = stack_A->next;
	while (second != NULL)
	{
		if (first->value > second->value)
			return (0);
		first = first->next;
		second = second->next;
	}
	return (1);
}

int	ft_check_b_numbers(t_Node *stack_A, t_Node *stack_B)
{
	t_Node	*nbrb;

	nbrb = stack_B;
	while (nbrb != NULL)
	{
		if (stack_A->value < nbrb->value)
			return (0);
		nbrb = nbrb->next;
	}
	return (1);
}
