/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:36:36 by sde-mull          #+#    #+#             */
/*   Updated: 2022/04/07 23:36:36 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int    ft_retarrval(t_Node *stack, int *top, int *bot, int inv)
{
    v_ar var;

    var.index = 0;
    var.add = 0;
    var.len = ft_stack_length(stack);
    var.sort_arr = malloc((var.len) * sizeof(int));
    var.mid = var.len / 2;
    ft_fill_arr(var.sort_arr, stack, var.len);
    while (var.mid - 2 - var.add > 0 && var.mid + 2 + var.add < var.len)
    {
        top[var.index] = var.sort_arr[var.mid + 2 + var.add];
        bot[var.index] = var.sort_arr[var.mid - 2 - var.add];
        var.add = var.add + inv;
        var.index++;
    }
    var.mid = var.sort_arr[var.len / 2];
    free(var.sort_arr);
    return(var.mid);
}
