/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:26:22 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/08 20:23:09 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int    ft_retmidval(t_Node *stack)
{
    v_ar var;

    var.index = 0;
    var.len = ft_stack_length(stack);
    var.sort_arr = malloc((var.len) * sizeof(int));
    var.mid = ft_get_mid_number(var.sort_arr, stack, var.len);
    free(var.sort_arr);
    return (var.mid);
}

int     ft_get_mid_number(int *arr, t_Node *stack_A, int len)
{
    int mid;

    ft_fill_arr(arr, stack_A, len);
    if (len == 4)
        return (arr[len / 2 - 2]);
    else if (len <= 30)
        mid = len / 2;
    else if (len <= 60)
        mid = len / 3;
    else
        mid = 20;
    return(arr[mid - 1]);
}

void    ft_fill_arr(int *arr, t_Node *stack_A, int len)
{
    int	    index;
    t_Node  *temp;

    index = 0;
    temp = stack_A;
    while (temp != NULL)
    {
        arr[index] = temp->value;
        temp = temp->next;
        index++;
    }
    ft_sort_arr(arr, len);
}

void    ft_sort_arr(int *arr, int len)
{
    v_ar var;

    var.first = 0;
    while (var.first < len)
    {
        var.second = var.first + 1;
        while (var.second < len)
        {
            if (arr[var.first] > arr[var.second])
            {
                var.swap = arr[var.first];
                arr[var.first] = arr[var.second];
                arr[var.second] = var.swap;
            }
            var.second++;
        }
        var.first++;
    }
}
