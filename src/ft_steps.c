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

	stack_b = NULL;
	stack_a = ft_stack(argc, argv);
	ft_check_double_error(&stack_a);
	ft_sort(&stack_a, &stack_b);
	return (stack_a);
}
