/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxfun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:50:58 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 18:54:31 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_insert_number(t_Node **root, int value)
{
	t_Node	*new_node;
	t_Node	*curr;

	new_node = malloc(sizeof(t_Node));
	if (new_node == NULL)
		exit(2);
	new_node->next = NULL;
	new_node->value = value;
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	curr = *root;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
}

t_Node	*ft_stack(int argc, char *argv[])
{
	int			index;
	long long	converted;
	t_Node		*root;

	root = NULL;
	index = 1;
	while (index < argc)
	{
		ft_check_number_error(argv[index]);
		converted = ft_atoil(argv[index]);
		ft_check_error_limits(converted);
		ft_insert_number(&root, converted);
		index++;
	}
	return (root);
}

void	ft_deallocate(t_Node **root)
{
	t_Node	*curr;
	t_Node	*aux;

	curr = *root;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*root = NULL;
}

/*int ft_mid_count(t_Node *stack_A)
{
    int count;
    int len;

    count = 0;
    len = ft_stack_length(stack_A);
    while (len != 2 && len != 3)
    {
        len = len / 4;
        
        count += 1;
    }
    return (count);
}*/