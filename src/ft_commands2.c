/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:13:42 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 19:26:20 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_ra(t_Node **stack_A)
{
	ft_rotate(stack_A);
	write(1, "ra\n", 3);
}

void	ft_rb(t_Node **stack_B)
{
	ft_rotate(stack_B);
	write(1, "rb\n", 3);
}

void	ft_rr(t_Node **stack_A, t_Node **stack_B)
{
	ft_rotate(stack_A);
	ft_rotate(stack_B);
	write(1, "rr\n", 3);
}

void	ft_pb(t_Node **stack_A, t_Node **stack_B)
{
	ft_push(stack_A, stack_B);
	write(1, "pb\n", 3);
}
