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

void    ft_rra(Node **stack_A)
{
    ft_reverse(stack_A);
    write(1, "rra\n", 5);
}

void    ft_rrb(Node **stack_B)
{
    ft_reverse(stack_B);
    write(1, "rrb\n", 5);
}

void    ft_rrr(Node **stack_A, Node **stack_B)
{
    ft_reverse(stack_A);
    ft_reverse(stack_B);
    write(1, "rrr\n", 5);
}