/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:36:40 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/08 20:04:04 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    ft_sort_all(t_Node **stack_A, t_Node **stack_B, int argc)
{
    int *sort_arr;
    int index;
    
    index = 0;
    sort_arr = malloc((argc - 1) * sizeof(int));
    ft_sort_arr(sort_arr, *stack_A, argc);
    while (index < argc)
    {
        printf("the array number is: %d\n", sort_arr[index]);
        index++;
    }
}