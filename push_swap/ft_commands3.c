/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:36:43 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/01 21:36:43 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rra(t_Node **stack_A)
{
	ft_reverse(stack_A);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_Node **stack_B)
{
	ft_reverse(stack_B);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_Node **stack_A, t_Node **stack_B)
{
	ft_reverse(stack_A);
	ft_reverse(stack_B);
	write(1, "rrr\n", 4);
}
