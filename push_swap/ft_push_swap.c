/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:34:43 by sde-mull          #+#    #+#             */
/*   Updated: 2022/01/18 20:34:43 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	Node	*stack;

	if (argc <= 1)
		exit(1);
	stack = ft_steps(argc, argv);
	Node *curr = stack;
    while (curr != NULL)
    {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
	deallocate(&stack);
	return(0);
}
