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


void    ft_ra(Node **stack_A)
{
    rotate(stack_A);
    write(1, "ra\n", 4);
}

void    ft_rb(Node **stack_B)
{
    rotate(stack_B);
    write(1, "rb\n", 4);
}

void    ft_rr(Node **stack_A, Node **stack_B)
{
    rotate(stack_A);
    rotate(stack_B);
    write(1, "rr\n", 4);
}

void    ft_pb(Node **stack_A, Node **stack_B)
{
    push(stack_A, stack_B);
    write(1, "pb\n", 4);
}
