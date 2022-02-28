/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commfun.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde-mull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:00:39 by sde-mull          #+#    #+#             */
/*   Updated: 2022/02/28 19:15:15 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void    swap(Node *stack)
{
    int temp;

    temp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = temp;
}

Node *rotate(Node *stack)
{
    int exvalue;
    Node *new_node;

    exvalue = stack->value;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        exit(3);
    while (stack->next != NULL)
    {
        stack = stack->next;
        insert_number(&new_node, stack->value);
    }
    insert_number(&new_node, exvalue);
    return(new_node);
}

void remove_element(Node** root, int value)
{
    if (root == NULL)
        return;
    if ((*root)->value == value)
    {
        Node *to_remove = *root;
        *root = (*root)->next;
        free(to_remove);
        return;
    }
    Node *curr = *root;
    while (curr->next != NULL)
    {
        if (curr->next->value == value)
        {
            Node *to_remove = curr->next;
            curr->next = curr->next->next;
            free(to_remove);
            return;
        }
        curr = curr->next;
    }
}