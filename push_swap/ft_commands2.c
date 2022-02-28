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

Node  *ft_rb(Node *stack_B)
{
    Node *new;

    new = rotate(stack_B);
    remove_element(&new, new->value);
    write(1, "rb\n", 4);
    deallocate(&stack_B);
    return(new);
}

Node  *ft_rr(Node *stack_A, Node *stack_B)
{
    Node    *new;

    new = rotate(stack_A);
    remove_element(&new, new->value);
    write(1, "rr\n", 4);
    deallocate(&stack_A);
    return(new);
}