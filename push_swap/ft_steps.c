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

t_Node	*ft_steps(int argc, char *argv[])
{
	t_Node	*stack_a;
	t_Node	*stack_b;
    t_Node  *temp;
	int		index;

	index = 1;
	stack_b = NULL;
	stack_a = ft_stack(argc, argv);
	ft_check_double_error(&stack_a);
	ft_sort(&stack_a, &stack_b);
    temp = stack_a;
    printf("stack_a:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
    temp = stack_b;
    printf("stack_b:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
	return (stack_a);
}
