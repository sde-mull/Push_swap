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
    int *sort_arr;
    int mid;
    int len;
    int index;

    index = 0;
    len = ft_stack_length(stack);
    sort_arr = malloc((len) * sizeof(int));
    mid = ft_get_mid_number(sort_arr, stack, len);
    free(sort_arr);
    return (mid);
}

int     ft_get_mid_number(int *arr, t_Node *stack_A, int len)
{
    int mid;

    mid = len / 4;
    ft_fill_arr(arr, stack_A, len);
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
    int first;
    int second;
    int swap;

    first = 0;
    while (first < len)
    {
        second = first + 1;
        while (second < len)
        {
            if (arr[first] > arr[second])
            {
                swap = arr[first];
                arr[first] = arr[second];
                arr[second] = swap;
            }
            second++;
        }
        first++;
    }
}
