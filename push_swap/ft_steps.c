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
    Node *stack_b;
    int index;

    index = 1;
    stack_b = NULL;
    stack_a = stack(argc, argv);
    ft_sort(&stack_a, &stack_b);
    Node *curr = stack_a;
    printf("stack_a:\n");
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
    Node *curr1 = stack_b;
    printf("stack_b:\n");
    while (curr1 != NULL)
    {
        printf("%d\n", curr1->value);
        curr1 = curr1->next;
    }
    return(stack_a);
}