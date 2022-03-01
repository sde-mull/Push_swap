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

void    ft_sa(Node *stack_A)
{
    swap(stack_A);
    write(1, "sa\n", 4);
}

void    ft_sb(Node *stack_B)
{
    swap(stack_B);
    write(1, "sb\n", 4);
}

void    ft_ss(Node *stack_A, Node *stack_B)
{
    swap(stack_A);
    swap(stack_B);
    write(1, "ss\n", 4);
}

void    ft_pa(Node **stack_A, Node **stack_B)
{
    push(stack_B, stack_A);
    write(1, "pa\n", 4);
}