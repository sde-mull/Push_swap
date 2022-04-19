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
    int *sort_arr;
    int index;
    int mid;
    int len;
    int add;

    index = 0;
    add = 0;
    len = ft_stack_length(stack);
    sort_arr = malloc((len) * sizeof(int));
    mid = len / 2;
    ft_fill_arr(sort_arr, stack, len);
    while (mid - 2 - add > 0 && mid + 2 + add < len)
    {
        top[index] = sort_arr[mid + 2 + add];
        bot[index] = sort_arr[mid - 2 - add];
        add = add + inv;
        index++;
    }
    mid = sort_arr[len / 2];
    free(sort_arr);
    return(mid);
}
