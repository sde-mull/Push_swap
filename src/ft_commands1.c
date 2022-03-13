/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:46:51 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/23 12:46:51 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sa(t_Node **stack_A)
{
	ft_swap(stack_A);
	write(1, "sa\n", 3);
}

void	ft_sb(t_Node **stack_B)
{
	ft_swap(stack_B);
	write(1, "sb\n", 3);
}

void	ft_ss(t_Node **stack_A, t_Node **stack_B)
{
	ft_swap(stack_A);
	ft_swap(stack_B);
	write(1, "ss\n", 3);
}

void	ft_pa(t_Node **stack_A, t_Node **stack_B)
{
	ft_push(stack_B, stack_A);
	write(1, "pa\n", 3);
}
