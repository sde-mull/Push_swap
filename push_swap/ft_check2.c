/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:51:33 by sde-mull          #+#    #+#             */
/*   Updated: 2022/03/09 21:51:33 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int ft_check_value(t_Node *stack, int mid)
{
    t_Node *temp;

    temp = stack;
    while (temp != NULL)
    {
        if (temp->value <= mid)
            return (1);
        temp = temp->next;
    }
    return(0);
}