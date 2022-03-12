/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commfun.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:00:39 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 19:15:15 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap(t_Node **stack)
{
	int	temp;

	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	ft_rotate(t_Node **stack)
{
	t_Node	*first;
	t_Node	*last;

	first = *stack;
	last = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ft_reverse(t_Node **stack)
{
	t_Node	*slast;
	t_Node	*last;

	slast = NULL;
	last = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		slast = last;
		last = last->next;
	}
	slast->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	ft_push(t_Node **srcstack, t_Node **dststack)
{
	t_Node	*srctmp;

	srctmp = *srcstack;
	if (*srcstack == NULL)
		return ;
	if (*dststack == NULL)
	{
		*srcstack = srctmp->next;
		srctmp->next = NULL;
		*dststack = srctmp;
		return ;
	}
	*srcstack = srctmp->next;
	srctmp->next = NULL;
	srctmp->next = *dststack;
	*dststack = srctmp;
}
