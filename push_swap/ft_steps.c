/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_steps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:21:07 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 19:25:32 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

Node    *ft_steps(int argc, char *argv[])
{
    Node *stack_a;
    
    stack_a = stack(argc, argv);
    stack_a = ft_rb(stack_a);
    stack_a = ft_rb(stack_a);
    stack_a = ft_rb(stack_a);
    stack_a = ft_rb(stack_a);
    stack_a = ft_rb(stack_a);
    return(stack_a);
}